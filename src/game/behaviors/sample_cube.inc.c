#include "src/game/rigid_body.h"
#include "actors/group0.h"
#include "src/game/rigid_body.h"
#include "src/audio/external.h"
#include "src/game/game_init.h"
#include "src/game/area.h"
#include "src/game/hud.h"
#include "src/game/level_update.h"

Vec3f Collider_Size = {37.0f, 20.0f, 25.0f};

Vec3f M_Size = {17.0f, 17.0f, 17.0f};

Vec3f Tiny_Size = {17.0f, 17.0f, 17.0f};
Vec3f Arm_Size = {11.0f, 11.0f, 11.0f};

u8 gChangingLevel;


Vec3f M_Body_Verts[13] = {
	{1.0f, 1.4f, 1.0f},
	{1.0f, 1.4f, -1.0f},
    {-1.0f, 1.4f, -1.0f},
    {-1.0f, 1.4f, 1.0f},
    {2.0f, 0.0f, 2.0f},
    {2.0f, 0.0f, -2.0f},
    {3.0f, 0.0f, 0.0f},
    {-2.0f, 0.0f, -2.0f},
    {-2.0f, 0.0f, 2.0f},
    {1.0f, -1.4f, 1.0f},
    {1.0f, -1.4f, -1.0f},
    {-1.0f, -1.4f, -1.0f},
    {-1.0f, -1.4f, 1.0f}
};

Vec3f M_Limb_R_Verts[13] = {
	{1.0f, 1.0f, 2.0f},
	{1.0f, 1.0f, 1.0f},
    {-1.0f, 1.0f, 1.0f},
    {-1.0f, 1.0f, 2.0f},
    {2.0f, 0.0f, 3.0f},
    {2.0f, 0.0f, 0.5f},
    {-2.0f, 0.0f, 0.5f},
    {0.0f, 0.0f, 3.2f},
    {-2.0f, 0.0f, 3.0f},
    {1.0f, -1.0f, 2.0f},
    {1.0f, -1.0f, 1.0f},
    {-1.0f, -1.0f, 1.0f},
    {-1.0f, -1.0f, 2.0f}
};

Vec3f M_Limb_L_Verts[13] = {
	{1.0f, 1.0f, -2.0f},
	{1.0f, 1.0f, -1.0f},
    {-1.0f, 1.0f, -1.0f},
    {-1.0f, 1.0f, -2.0f},
    {2.0f, 0.0f, -3.0f},
    {2.0f, 0.0f, -0.5f},
    {-2.0f, 0.0f, -0.5f},
    {0.0f, 0.0f, -3.2f},
    {-2.0f, 0.0f, -3.0f},
    {1.0f, -1.0f, -2.0f},
    {1.0f, -1.0f, -1.0f},
    {-1.0f, -1.0f, -1.0f},
    {-1.0f, -1.0f, -2.0f}
};

Vec3f M_Head_Verts[12] = {
	{1.0f, 0.5f, 1.0f},
	{1.0f, 0.5f, -1.0f},
    {2.0f, 0.5f, -1.0f},
    {2.0f, 0.5f, 1.0f},
    {3.0f, 0.0f, 2.0f},
    {3.0f, 0.0f, -2.0f},
    {0.5f, 0.0f, -2.0f},
    {0.5f, 0.0f, 2.0f},
    {1.0f, -0.5f, 1.0f},
    {1.0f, -0.5f, -1.0f},
    {2.0f, -0.5f, -1.0f},
    {2.0f, -0.5f, 1.0f}
};

Vec3f M_Plane_Verts[8] = {
	{1.0f, 0.2f, 1.0f},
	{1.0f, 0.2f, -1.0f},
    {3.0f, 0.2f, -1.0f},
    {3.0f, 0.2f, 1.0f},
    {1.0f, -0.2f, 1.0f},
	{1.0f, -0.2f, -1.0f},
    {3.0f, -0.2f, -1.0f},
    {3.0f, -0.2f, 1.0f}
};

Vec3f M_Leg_Verts[13] = {
	{-1.0f, 0.5f, 1.0f},
	{-1.0f, 0.5f, -1.0f},
    {-2.0f, 0.5f, -1.0f},
    {-2.0f, 0.5f, 1.0f},
    {0.0f, 0.0f, 2.0f},
    {0.0f, 0.0f, -2.0f},
    {-2.0f, 0.0f, -2.0f},
    {-2.2f, 0.0f, 0.0f},
    {-2.0f, 0.0f, 2.0f},
    {-1.0f, -0.5f, 1.0f},
    {-1.0f, -0.5f, -1.0f},
    {-2.0f, -0.5f, -1.0f},
    {-2.0f, -0.5f, 1.0f}
};

struct MeshInfo Ball_Mesh = {
    M_Body_Verts,
    NULL,
    NULL,
    NULL,
    12, // Number of vertices
    0,
    0,
    0
};

struct MeshInfo Collider_Mesh = {
    M_Body_Verts,
    NULL,
    NULL,
    NULL,
    13, // Number of vertices
    0,
    0,
    0
};

struct MeshInfo M_Body_Mesh = {
    M_Body_Verts,
    NULL,
    NULL,
    NULL,
    13, // Number of vertices
    0,
    0,
    0
};

struct MeshInfo M_Head_Mesh = {
    M_Head_Verts,
    NULL,
    NULL,
    NULL,
    12, // Number of vertices
    0,
    0,
    0
};

struct MeshInfo M_Limb_R_Mesh = {
    M_Limb_L_Verts,
    NULL,
    NULL,
    NULL,
    13, // Number of vertices
    0,
    0,
    0
};

struct MeshInfo M_Limb_L_Mesh = {
    M_Limb_R_Verts,
    NULL,
    NULL,
    NULL,
    13, // Number of vertices
    0,
    0,
    0
};

struct MeshInfo M_Leg_Mesh = {
    M_Leg_Verts,
    NULL,
    NULL,
    NULL,
    13, // Number of vertices
    0,
    0,
    0
};

void bhv_sample_cube_init(void) {

    struct RigidBody *body;

    o->oBoosting = 0;

    if (o->oBehParams2ndByte == 90) {
        spawn_object_relative(0, 0, 0, 0, o, MODEL_M_BODY, bhvSampleSphere);
        body = allocate_rigid_body_from_object(o, &Collider_Mesh, 20.f, Collider_Size, FALSE);
        body->colOnly = 1;
    }
    else if (o->oBehParams2ndByte == 0) {
        spawn_object_relative(5, 0, 0, 0, o, MODEL_M_SHOULDER_R, bhvSampleSphere);
        spawn_object_relative(6, 0, 0, 0, o, MODEL_M_HEAD, bhvSampleSphere);
        spawn_object_relative(7, 0, 0, 0, o, MODEL_M_THIGH_L, bhvSampleSphere);
        spawn_object_relative(8, 0, 0, 0, o, MODEL_M_THIGH_R, bhvSampleSphere);
        spawn_object_relative(4, 0, 0, 0, o, MODEL_M_SHOULDER_L, bhvSampleSphere);
        body = allocate_rigid_body_from_object(o, &M_Body_Mesh, 3.f, M_Size, FALSE);

        gMarioState->ragdoll = o;

        
    }
    else {

        if (obj_has_model(o, MODEL_M_THIGH_L)) {
            spawn_object_relative(7, 0, 0, 0, o, MODEL_M_LEG_L, bhvSampleSphere);
        }
        if (obj_has_model(o, MODEL_M_THIGH_R)) {
            spawn_object_relative(7, 0, 0, 0, o, MODEL_M_LEG_R, bhvSampleSphere);
        }
        if (obj_has_model(o, MODEL_M_LEG_L)) {
            spawn_object_relative(7, 0, 0, 0, o, MODEL_M_FOOT_L, bhvSampleSphere);
        }
        if (obj_has_model(o, MODEL_M_LEG_R)) {
            spawn_object_relative(7, 0, 0, 0, o, MODEL_M_FOOT_R, bhvSampleSphere);
        }

        if (obj_has_model(o, MODEL_M_SHOULDER_L)) {
            spawn_object_relative(7, 0, 0, 0, o, MODEL_M_ARM_L, bhvSampleSphere);
        }
        if (obj_has_model(o, MODEL_M_SHOULDER_R)) {
            spawn_object_relative(7, 0, 0, 0, o, MODEL_M_ARM_R, bhvSampleSphere);
        }
        if (obj_has_model(o, MODEL_M_ARM_L)) {
            spawn_object_relative(7, 0, 0, 0, o, MODEL_M_HAND_L, bhvSampleSphere);
        }
        if (obj_has_model(o, MODEL_M_ARM_R)) {
            spawn_object_relative(7, 0, 0, 0, o, MODEL_M_HAND_R, bhvSampleSphere);
        }


        //allocation
        if (obj_has_model(o, MODEL_M_THIGH_L) || obj_has_model(o, MODEL_M_THIGH_R) || obj_has_model(o, MODEL_M_LEG_L) || obj_has_model(o, MODEL_M_LEG_R) || obj_has_model(o, MODEL_M_FOOT_L) || obj_has_model(o, MODEL_M_FOOT_R)) {
            body = allocate_rigid_body_from_object(o, &M_Leg_Mesh, 3.f, Tiny_Size, FALSE);
        }
        else if (obj_has_model(o, MODEL_M_HEAD)) {
            body = allocate_rigid_body_from_object(o, &M_Head_Mesh, 9.2f, Tiny_Size, FALSE);
        }
        else if (obj_has_model(o, MODEL_M_ARM_L) || obj_has_model(o, MODEL_M_SHOULDER_L) || obj_has_model(o, MODEL_M_HAND_L)) {
            body = allocate_rigid_body_from_object(o, &M_Limb_L_Mesh, 3.f, Arm_Size, FALSE);
        }
        else {
            body = allocate_rigid_body_from_object(o, &M_Limb_R_Mesh, 3.f, Arm_Size, FALSE);
        }
        
        body->parentBody = o->parentObj->rigidBody;
    }

    

    if (0 && (obj_has_model(o, MODEL_M_SHOULDER_L) || obj_has_model(o, MODEL_M_SHOULDER_R) || obj_has_model(o, MODEL_M_THIGH_L) || obj_has_model(o, MODEL_M_THIGH_R))) {
        body->maxYaw = 0x1000;
        body->maxRoll = 0x1000;
        body->maxPitch = 0x1000;
        body->minYaw = -0x1000;
        body->minRoll = -0x1000;
        body->minPitch = -0x1000;
    }

    if (0 && obj_has_model(o, MODEL_M_HEAD)) {
        body->maxYaw = 0x1000;
        body->maxRoll = 0x500;
        body->maxPitch = 0x1000;
        body->minYaw = -0x1000;
        body->minRoll = -0x500;
        body->minPitch = -0x1000;
    }

    gFalling = 0;

}

void bhv_sample_cube_loop(void) {

    
    //main ragdoll processing code happens for the body (basically the main controller)
    if (o->oBehParams2ndByte == 0) {

        if (o->oTimer == 5 && o->oAction == 0) {
            if (gCurrAreaIndex == 1 && gCurrLevelNum == LEVEL_BOB) {
                play_sound(SOUND_RAGDOLL3_SPOTLIGHT, gGlobalSoundSource);
            }
        }
        
        if (gChangingLevel != 0) {
            deallocate_rigid_body(o->rigidBody);
            obj_mark_for_deletion(o);
            //warp logic
            if (gCurrAreaIndex == 6 && gCurrLevelNum == LEVEL_WF && gChangingLevel == 1) {
                initiate_warp(LEVEL_JRB, 1, 0x0A, 0);
            }
            else if (gCurrAreaIndex != 10 || gChangingLevel == 0) {
                initiate_warp(gCurrLevelNum, gCurrAreaIndex + (gChangingLevel == 1 ? 1 : 0), 0x0A, 0);
            }
            else if (gCurrLevelNum == LEVEL_BOB) {
                initiate_warp(LEVEL_WF, 1, 0x0A, 0);
            }
            gChangingLevel = 0;
            return;
        }

        if ((gMarioState->floor && gMarioState->floor->type == SURFACE_GOAL && ((gMarioState->pos[1] - gMarioState->floorHeight) < 100) && gChangingLevel == 0)) {
            o->oAction = 1;
        }

        if (gPlayer1Controller->buttonPressed & L_TRIG) {

            //gChangingLevel = 1;
        }
        
        //regular action state
        if (o->oAction == 0) {
            //death plane detection
            if ((gMarioState->floor && gMarioState->floor->type == SURFACE_DEATH_PLANE && ((gMarioState->pos[1] - gMarioState->floorHeight) < 4000))) {
                o->oAction = 2;
                gFalling = 1;
                gCamera->cutscene = 1;
            }

            //boost floor
            if ((gMarioState->floor->type == SURFACE_AUTO_VERTICAL_BOOST && ((gMarioState->pos[1] - gMarioState->floorHeight) < 200) && gChangingLevel == 0 && o->oBoosting == 0 && o->rigidBody->linearVel[1] > -4.0f)
            || ((gPlayer1Controller->buttonPressed & Z_TRIG) && (gMarioState->floor && gMarioState->floor->type == SURFACE_VERTICAL_BOOST && ((gMarioState->pos[1] - gMarioState->floorHeight) < 200) && gChangingLevel == 0 && o->oBoosting == 0))) {

                //cap the yvel before applying the force
                if (o->rigidBody->linearVel[1] > 20) {
                    o->rigidBody->linearVel[1] = 20; 
                }
                
                play_sound(SOUND_NEW_BOOST_JUMP, o->rigidBody->centerOfMass);

                Vec3f originPoint;

                originPoint[0] = gMarioState->pos[0] - gMarioState->floor->normal.x;
                originPoint[1] = gMarioState->pos[1] - gMarioState->floor->normal.y;
                originPoint[2] = gMarioState->pos[2] - gMarioState->floor->normal.z;

                o->oBoosting = 20;
                
                o->rigidBody->asleep = 0;

                o->rigidBody->linearVel[0] += 50.0f * gMarioState->floor->normal.x;
                o->rigidBody->linearVel[1] += 100.0f * gMarioState->floor->normal.y;
                o->rigidBody->linearVel[2] += 50.0f * gMarioState->floor->normal.z;

                Vec3f nextPos;
                vec3f_copy(nextPos, o->rigidBody->centerOfMass);

                nextPos[0] += o->rigidBody->linearVel[0];
                nextPos[1] += o->rigidBody->linearVel[1];
                nextPos[2] += o->rigidBody->linearVel[2];

                spawn_object_relative(0, 0, 10, 0, o, MODEL_BOOST_RING, bhvBoostRing);

                struct Object *verticalBoost = spawn_object_relative(0, 0, 0, 0, o, MODEL_BOOST_PARTICLE, bhvBoostParticle);

                Vec3f d;
                d[0] = nextPos[0] - o->rigidBody->centerOfMass[0];
                d[2] = nextPos[2] - o->rigidBody->centerOfMass[2];

                verticalBoost->oFaceAngleYaw = atan2s(d[2], d[0]);
                verticalBoost->oMoveAngleYaw = atan2s(d[2], d[0]);
                obj_turn_toward_position(verticalBoost, nextPos, O_MOVE_ANGLE_PITCH_INDEX, 0x4000);
                obj_turn_toward_position(verticalBoost, nextPos, O_FACE_ANGLE_PITCH_INDEX, 0x4000);

                verticalBoost->oVelX = o->rigidBody->linearVel[0];
                verticalBoost->oVelY = o->rigidBody->linearVel[1];
                verticalBoost->oVelZ = o->rigidBody->linearVel[2];
            }
        }
        //reached the goal
        else if (o->oAction == 1) {
            if (o->oTimer == 1) {
                play_star_fanfare();
                if (gCurrLevelNum != LEVEL_BOB || gCurrAreaIndex != 1) {
                    switch (random_u16() % 3) {
                        case 0:
                            gHudDisplay.flags |= HUD_DISPLAY_FLAG_STEAMHAPPY;
                            play_sound(SOUND_NEW_STEAMHAPPY, gGlobalSoundSource);
                        break;
                        case 1:
                            gHudDisplay.flags |= HUD_DISPLAY_FLAG_THUMBSUP;
                        break;
                        case 2:
                            gHudDisplay.flags |= HUD_DISPLAY_FLAG_GANGNAM;
                        break;
                    }
                }

                play_sound(SOUND_MARIO_YAHOO_WAHA_YIPPEE + ((gAudioRandom % 5) << 16), gGlobalSoundSource);

                gHudDisplay.flags &= ~(HUD_DISPLAY_FLAG_CAMERA_AND_POWER | HUD_DISPLAY_FLAG_COIN_COUNT | HUD_DISPLAY_FLAG_STAR_COUNT);
                gGoalFanfare = 1;
            }

            if (o->oTimer == 90) {
                gChangingLevel = 1;
                gGoalFanfare = 0;
            }
        }
        //falling
        else if (o->oAction == 2) {
            if (o->oTimer == 1) {
                play_transition(WARP_TRANSITION_FADE_INTO_CIRCLE, 20, 0x00, 0x00, 0x00);
                switch (random_u16() % 4) {
                    case 0:
                        play_sound(SOUND_MARIO_WAAAOOOW, gGlobalSoundSource);
                    break;
                    case 1:
                        play_sound(SOUND_MARIO_ATTACKED, gGlobalSoundSource);
                    break;
                    case 2:
                        play_sound(SOUND_NEW_MARIOSAYSFUCK, gGlobalSoundSource);
                    break;
                    case 3:
                        play_sound(SOUND_NEW_KIRBYSCREAM, gGlobalSoundSource);
                    break;
                }
            }

            if (o->oTimer == 20) {
              gChangingLevel = 2;  
            }
        }

    }
    //if the level is about to change, delete all the body parts first
    else if (gChangingLevel != 0) {
        deallocate_rigid_body(o->rigidBody);
        obj_mark_for_deletion(o);
    }

    //quat constraints
    if (o->rigidBody->parentBody) {
        if (!((obj_has_model(o, MODEL_M_ARM_L) || obj_has_model(o, MODEL_M_ARM_R) || obj_has_model(o, MODEL_M_HAND_L) || obj_has_model(o, MODEL_M_HAND_R)))) {
            constrain_quaternion(o->rigidBody->parentBody->angleQuat, o->rigidBody->angleQuat, M_PI/1.3f);
        }
    }
        
    
    //sleep deactivation
    if ((o->rigidBody->parentBody && o->rigidBody->parentBody->asleep == 0) || o->oTimer < 10) {
        o->rigidBody->asleep = 0;
    }
    if (gMarioState->controller->stickX != 0 || gMarioState->controller->stickY != 0) {
        o->rigidBody->asleep = 0;
    }


    //cowboy code solution to bounciness. The boosting var disables itself if mario's y vel is under 20 to reenable the cap.
    if (o->rigidBody->linearVel[1] > 20) {
        if (o->oBoosting == 0) {
            o->rigidBody->linearVel[1] = 20;
        }
    }
    if (o->oBehParams2ndByte == 0) {
    //SUUUUPER cowboy code solution to handle mario flying off corners
    struct Surface *floor;
    f32 fHeight = find_floor(o->rigidBody->centerOfMass[0], o->rigidBody->centerOfMass[1] + 100, o->rigidBody->centerOfMass[2], &floor);
    f32 directionMag = sqrtf(sqr(o->rigidBody->linearVel[0] - o->oLastVelX) + sqr(o->rigidBody->linearVel[2] - o->oLastVelZ));
    if (o->oBoosting == 0 && (directionMag > 3.0f) && o->rigidBody->linearVel[0] > 0.0f && o->rigidBody->centerOfMass[1] - fHeight > 300) {
        //mario is PROBABLY flying off a corner at this point so destroy his velocity
        o->rigidBody->linearVel[0] *= 0.8f;
        o->rigidBody->linearVel[1] *= 0.4f;
        o->rigidBody->linearVel[2] *= 0.8f;
    }

    o->oLastVelX = o->rigidBody->linearVel[0];
    o->oLastVelY = o->rigidBody->linearVel[1];
    o->oLastVelZ = o->rigidBody->linearVel[2];

    if (o->oBoosting > 0) {
        o->oBoosting--;
    }


    //set mario's position to the body position
    
       gMarioState->pos[0] = o->oPosX;
       gMarioState->pos[1] = o->oPosY;
       gMarioState->pos[2] = o->oPosZ;

       gMarioState->action = ACT_WAITING_FOR_DIALOG;
       gMarioObject->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_NONE];
    }

}

