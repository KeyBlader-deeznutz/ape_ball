void bhv_mario_car_init(void) {
   
}

void bhv_mario_car_loop(void) {

    if (o->oAction == 0) {
    o->oPosX -= 14.0f * ((f32)o->oTimer / 120.0f);


    gMarioState->pos[0] = o->oPosX;
    gMarioState->pos[1] = o->oPosY;
    gMarioState->pos[2] = o->oPosZ;
    gMarioState->action = ACT_WAITING_FOR_DIALOG;
       gMarioObject->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_NONE];

    gCamera->cutscene = 1;

    gLakituState.goalPos[0] = o->oPosX - 300 + CLAMP(300 - o->oTimer * 2, 0, 500);
    gLakituState.goalPos[1] = o->oPosY + 500;
    gLakituState.goalPos[2] = o->oPosZ - 800  - CLAMP(1800 - o->oTimer * 4, 0, 1800);
    gLakituState.goalFocus[0] = o->oPosX + 40;
    gLakituState.goalFocus[1] = o->oPosY;
    gLakituState.goalFocus[2] = o->oPosZ;

    cur_obj_init_animation_with_accel_and_sound(0, 1.0f + ((f32)o->oTimer / 120.0f));

    if (o->oTimer == 580) {
        o->oAction = 1;
    }
    }

    else if (o->oAction == 1) {
        cur_obj_init_animation(1);
    }
    
}

