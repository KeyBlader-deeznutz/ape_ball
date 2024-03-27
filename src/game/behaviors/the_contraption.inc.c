void bhv_the_contraption_init(void) {
   
}

void bhv_the_contraption_loop(void) {
    o->oFaceAngleYaw = -0x4000;
    if (o->parentObj->oTimer > 45 && o->parentObj->oTimer < 90) {
        if (o->oTimer % 3 == 0) play_sound(SOUND_ENV_METAL_BOX_PUSH, gGlobalSoundSource);
    }
    if (o->parentObj->oTimer < 90) {
        o->oPosX += 10;
    }
    else if (o->parentObj->oTimer < 115){
        o->oPosX += 5;
    }
}

