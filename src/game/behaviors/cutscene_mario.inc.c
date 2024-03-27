#include "include/seq_ids.h"
#include "src/game/area.h"

void bhv_cutscene_mario_init(void) {
    if (gCurrLevelNum == LEVEL_JRB) {
    o->parentObj = spawn_object(o, MODEL_THE_CONTRAPTION, bhvTheContraption);
    }
}

void bhv_cutscene_mario_loop(void) {

    

    if (gCurrLevelNum == LEVEL_JRB) {

        gHudDisplay.flags = HUD_DISPLAY_NONE;

        o->oFaceAngleYaw = -0x4000;

        cur_obj_init_animation(1);

        if (o->oTimer < 45) {
            o->oPosX = 500 - o->oTimer * 30;
            o->oPosY = 300;
            o->oPosZ = 0;

            gMarioState->pos[0] = o->oPosX;
            gMarioState->pos[1] = o->oPosY;
            gMarioState->pos[2] = o->oPosZ;
            gMarioState->action = ACT_WAITING_FOR_DIALOG;
            gMarioObject->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_NONE];

            gCamera->cutscene = 1;

            gLakituState.goalPos[0] = o->oPosX - 50;
            gLakituState.goalPos[1] = o->oPosY;
            gLakituState.goalPos[2] = o->oPosZ - 400;
            gLakituState.goalFocus[0] = o->oPosX;
            gLakituState.goalFocus[1] = o->oPosY;
            gLakituState.goalFocus[2] = o->oPosZ;

            o->parentObj->oPosX = o->oPosX - 2000;
            o->parentObj->oPosY = o->oPosY - 300;
            o->parentObj->oPosZ = o->oPosZ;
            cur_obj_play_sound_1(SOUND_ENV_WIND2);

            if (o->oTimer == 26) {
                play_sound(SOUND_MARIO_WHOA, gGlobalSoundSource);
            }
        }
        else if (o->oTimer == 45) {
            gLakituState.goalFocus[0] = o->parentObj->oPosX;
            gLakituState.goalFocus[1] = o->parentObj->oPosY + 100;
            gLakituState.goalFocus[2] = o->parentObj->oPosZ;
            gLakituState.goalPos[1] = o->oPosX - 200;
            gLakituState.goalPos[1] = o->oPosY + 200;
            gLakituState.goalPos[2] = o->oPosZ - 900;
        }

        if (o->oTimer >= 70 && o->oTimer <= 90) {
            o->oPosX = 500 - o->oTimer * 30;
            o->oPosY = 300;
            o->oPosZ = 0;

            if (o->oTimer == 70) {
                play_sound(SOUND_MARIO_MAMA_MIA, gGlobalSoundSource);
            }

            gMarioState->pos[0] = o->oPosX;
            gMarioState->pos[1] = o->oPosY;
            gMarioState->pos[2] = o->oPosZ;
            gMarioState->action = ACT_WAITING_FOR_DIALOG;
            gMarioObject->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_NONE];

            gCamera->cutscene = 1;

            gLakituState.goalPos[0] = o->oPosX - 50;
            gLakituState.goalPos[1] = o->oPosY;
            gLakituState.goalPos[2] = o->oPosZ - 400;
            gLakituState.goalFocus[0] = o->oPosX;
            gLakituState.goalFocus[1] = o->oPosY;
            gLakituState.goalFocus[2] = o->oPosZ;

            o->parentObj->oPosX = o->oPosX - 2000;
            o->parentObj->oPosY = o->oPosY - 300;
            o->parentObj->oPosZ = o->oPosZ;
            if (o->oTimer == 90) {
                play_music(SEQ_PLAYER_LEVEL, SEQUENCE_ARGS(4, SEQ_LEVEL_WATER), 0);
            }

        }
        else if (o->oTimer > 90 && o->oTimer < 105) {
            o->oPosX = o->parentObj->oPosX;
            o->oPosY = o->parentObj->oPosY;
            o->oPosZ = o->parentObj->oPosZ;

            if (o->oTimer == 91) {
                gSlowdownCount = 3;
            gLakituState.goalFocus[0] = o->parentObj->oPosX;
            gLakituState.goalFocus[1] = o->parentObj->oPosY + 100;
            gLakituState.goalFocus[2] = o->parentObj->oPosZ;
            gLakituState.goalPos[1] = o->oPosX - 200;
            gLakituState.goalPos[1] = o->oPosY + 200;
            gLakituState.goalPos[2] = o->oPosZ - 900;
            }
        }
        else if (o->oTimer >= 120) {
            gLakituState.goalFocus[0] = o->parentObj->oPosX + 750;
            gLakituState.goalFocus[1] = o->parentObj->oPosY + 100;
            gLakituState.goalFocus[2] = o->parentObj->oPosZ;
            gLakituState.goalPos[0] = o->parentObj->oPosX + 700;
            gLakituState.goalPos[1] = o->parentObj->oPosY + 900;
            gLakituState.goalPos[2] = o->parentObj->oPosZ;
        }



        if (o->oTimer == 150) {
            play_transition(WARP_TRANSITION_FADE_INTO_COLOR, 40, 0x00, 0x00, 0x00);
        }
        if (o->oTimer == 190) {
            initiate_warp(LEVEL_ENDING, 1, 0x0A, 0);
        }
    }
}

