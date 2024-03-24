#include "src/game/level_update.h"

void bhv_view_aligner_init(void) {
    s16 angle = atan2s(o->oPosZ - gMarioState->pos[2], o->oPosX - gMarioState->pos[0]);
    extern s16 s8DirModeYawOffset;
    s8DirModeYawOffset = angle;

}

void bhv_view_aligner_loop(void) {

    if (o->oTimer <= 2) {
        s16 angle = atan2s(o->oPosZ - gMarioState->pos[2], o->oPosX - gMarioState->pos[0]);
        extern s16 s8DirModeYawOffset;
        s8DirModeYawOffset = angle;
    }

    if (gChangingLevel == 2) {
        o->oTimer = 0;
    }

    if (o->oBehParams2ndByte == 1) {
        gHudDisplay.flags &= ~(HUD_DISPLAY_FLAG_COIN_COUNT | HUD_DISPLAY_FLAG_STAR_COUNT | HUD_DISPLAY_FLAG_CAMERA_AND_POWER);
        gCamera->cutscene = 1;

        gLakituState.goalPos[0] = o->oPosX;
        gLakituState.goalPos[1] = o->oPosY;
        gLakituState.goalPos[2] = o->oPosZ;

        gLakituState.goalFocus[0] = o->oPosX;
        gLakituState.goalFocus[1] = o->oPosY;
        gLakituState.goalFocus[2] = o->oPosZ - 500;
    }
}

