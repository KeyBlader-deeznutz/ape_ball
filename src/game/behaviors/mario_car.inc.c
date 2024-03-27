#include "include/seq_ids.h"
#include "src/game/puppyprint.h"

void bhv_mario_car_init(void) {
   
}

void bhv_mario_car_loop(void) {

    gHudDisplay.flags = HUD_DISPLAY_NONE;

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
        stop_background_music(SEQUENCE_ARGS(4, SEQ_EVENT_CUTSCENE_CREDITS));
        play_sound(SOUND_NEW_CRASH, gGlobalSoundSource);
        play_sound(SOUND_MARIO_ATTACKED, gGlobalSoundSource);
    }
    }

    else if (o->oAction == 1) {
        
        cur_obj_init_animation(1);

        if (o->oTimer == 20) {
            spawn_object(gMarioObject, MODEL_CUTSCENE_MARIO, bhvCutsceneMario);
            
            obj_mark_for_deletion(o);
        }
    }



if (o->oTimer < 30) {
    u8 b = 1;
}
    else if (o->oTimer < 150) {
        print_text(110, 20, "CREDITS");
    }
    else if (o->oTimer < 300) {
        print_small_text_buffered(40, 170, "Hack By:", PRINT_TEXT_ALIGN_LEFT, PRINT_ALL, FONT_OUTLINE);
        print_small_text_buffered(60, 190, "CowQuack", PRINT_TEXT_ALIGN_LEFT, PRINT_ALL, FONT_OUTLINE);
        //print_text(60, 20, "CowQuack");
    }
    
    else if (o->oTimer < 450) {
        print_small_text_buffered(40, 170, "Rigidbody Engine:", PRINT_TEXT_ALIGN_LEFT, PRINT_ALL, FONT_OUTLINE);
        print_small_text_buffered(60, 190, "Arthurtilly", PRINT_TEXT_ALIGN_LEFT, PRINT_ALL, FONT_OUTLINE);
    }
    else if (o->oTimer < 580) {
        print_small_text_buffered(40, 170, "Playtesters:", PRINT_TEXT_ALIGN_LEFT, PRINT_ALL, FONT_OUTLINE);
        print_small_text_buffered(60, 190, "KeyBlader, you probably", PRINT_TEXT_ALIGN_LEFT, PRINT_ALL, FONT_OUTLINE);
    }
    
}

