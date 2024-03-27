void bhv_rotater_init(void) {
}

void bhv_rotater_loop(void) {
    o->oFaceAngleYaw += 0x200;

    o->oMoveAngleRoll = o->oFaceAngleRoll;
    o->oMoveAnglePitch = o->oFaceAnglePitch;
    o->oMoveAngleYaw = o->oFaceAngleYaw;

    struct Object *marioRigidBodyObj = gMarioState->ragdoll;

    load_object_collision_model();
    struct Surface *floor;
    f32 height = find_floor(gMarioState->pos[0], gMarioState->pos[1] + 4000, gMarioState->pos[2], &floor);

    if (floor && floor->object && gMarioState->pos[1] - height < 400 && marioRigidBodyObj->oBoosting == 0 && floor->object == o) {

        gMarioState->floor = floor;

        if (marioRigidBodyObj->rigidBody->linearVel[1] > 20) {
            marioRigidBodyObj->rigidBody->linearVel[1] = 20;
        }

        play_sound(SOUND_NEW_BOOST_JUMP, marioRigidBodyObj->rigidBody->centerOfMass);

        Vec3f originPoint;

        originPoint[0] = gMarioState->pos[0] - gMarioState->floor->normal.x;
        originPoint[1] = gMarioState->pos[1] - gMarioState->floor->normal.y;
        originPoint[2] = gMarioState->pos[2] - gMarioState->floor->normal.z;

        marioRigidBodyObj->oBoosting = 20;

        marioRigidBodyObj->rigidBody->asleep = 0;

        marioRigidBodyObj->rigidBody->linearVel[0] += 50.0f * gMarioState->floor->normal.x;
        marioRigidBodyObj->rigidBody->linearVel[1] += 100.0f * gMarioState->floor->normal.y;
        marioRigidBodyObj->rigidBody->linearVel[2] += 50.0f * gMarioState->floor->normal.z;

        if (gCurrLevelNum == LEVEL_WF && gCurrAreaIndex == 5
            && !(gPlayer1Controller->buttonPressed & Z_TRIG)) {
            marioRigidBodyObj->rigidBody->linearVel[0] *= 2.0f;
            marioRigidBodyObj->rigidBody->linearVel[1] *= 1.5f;
            marioRigidBodyObj->rigidBody->linearVel[2] *= 2.0f;
        }

        Vec3f nextPos;
        vec3f_copy(nextPos, marioRigidBodyObj->rigidBody->centerOfMass);

        nextPos[0] += marioRigidBodyObj->rigidBody->linearVel[0];
        nextPos[1] += marioRigidBodyObj->rigidBody->linearVel[1];
        nextPos[2] += marioRigidBodyObj->rigidBody->linearVel[2];

        spawn_object_relative(0, 0, 10, 0, marioRigidBodyObj, MODEL_BOOST_RING, bhvBoostRing);

        struct Object *verticalBoost =
            spawn_object_relative(0, 0, 0, 0, marioRigidBodyObj, MODEL_BOOST_PARTICLE, bhvBoostParticle);

        Vec3f d;
        d[0] = nextPos[0] - marioRigidBodyObj->rigidBody->centerOfMass[0];
        d[2] = nextPos[2] - marioRigidBodyObj->rigidBody->centerOfMass[2];

        verticalBoost->oFaceAngleYaw = atan2s(d[2], d[0]);
        verticalBoost->oMoveAngleYaw = atan2s(d[2], d[0]);
        //obj_turn_toward_position(verticalBoost, nextPos, O_MOVE_ANGLE_PITCH_INDEX, 0x4000);
        //obj_turn_toward_position(verticalBoost, nextPos, O_FACE_ANGLE_PITCH_INDEX, 0x4000);

        verticalBoost->oVelX = marioRigidBodyObj->rigidBody->linearVel[0];
        verticalBoost->oVelY = marioRigidBodyObj->rigidBody->linearVel[1];
        verticalBoost->oVelZ = marioRigidBodyObj->rigidBody->linearVel[2];
    }
}
