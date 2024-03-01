void bhv_testplane_init(void) {
   
}

void bhv_testplane_loop(void) {

    s16 camYaw = atan2s(-gMarioState->controller->stickY, gMarioState->controller->stickX) + gMarioState->area->camera->yaw;

    //print_text_fmt_int(100, 100, "%d", (int) gMarioState->controller->stickX);
    //print_text_fmt_int(100, 80, "%d", (int) gMarioState->controller->stickY);

    o->oMoveAnglePitch = approach_s16_symmetric(o->oMoveAnglePitch, 0x1000 * sins(0x100 * gMarioState->controller->stickY) * coss(0x100 * gMarioState->controller->stickX), 0x100);
    o->oMoveAngleRoll = approach_s16_symmetric(o->oMoveAngleRoll, 0x1000 * sins(0x100 * gMarioState->controller->stickX) * coss(0x100 * gMarioState->controller->stickY), 0x100);
}

