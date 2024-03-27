#include "levels/castle_inside/header.h"
#include "src/game/area.h"

void bhv_cutscene_castle_init(void) {
    play_secondary_music(SEQ_STREAMED_PIZZA, 127, 255, 10);
    
}

void bhv_cutscene_castle_loop(void) {

    if (o->oTimer > 0) {
    gCamera->cutscene = 1;
    gMarioState->action = ACT_WAITING_FOR_DIALOG;
    gMarioObject->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_NONE];


    const f32 (*coords)[2][3] = segmented_to_virtual(&inside_castle_scene);

    if (o->oTimer > 170) {
        gMarioState->marioBodyState->eyeState = 8;
    }

    if (o->oTimer == 270) {
        level_trigger_warp(gMarioState, WARP_OP_DEATH);
    }


    gLakituState.goalPos[0] = coords[o->oTimer][0][0];
    gLakituState.goalPos[1] = coords[o->oTimer][0][1];
    gLakituState.goalPos[2] = coords[o->oTimer][0][2];

    gMarioState->pos[0] = gLakituState.goalPos[0];
    gMarioState->pos[1] = gLakituState.goalPos[1];
    gMarioState->pos[2] = gLakituState.goalPos[2];

    gLakituState.goalFocus[0] = coords[o->oTimer][1][0];
    gLakituState.goalFocus[1] = coords[o->oTimer][1][1];
    gLakituState.goalFocus[2] = coords[o->oTimer][1][2];
    }
}
