void bhv_testplane_init(void) {
   
}

void bhv_testplane_loop(void) {

    s16 camYaw = atan2s(-gMarioState->controller->stickY, gMarioState->controller->stickX) + gMarioState->area->camera->yaw;

    //print_text_fmt_int(100, 100, "%d", (int) gMarioState->controller->stickX);
    //print_text_fmt_int(100, 80, "%d", (int) gMarioState->controller->stickY);

    o->oMoveAnglePitch = approach_s16_symmetric(o->oMoveAnglePitch, 0x2000 * sins(0x100 * gMarioState->controller->stickY) * coss(0x100 * gMarioState->controller->stickX), 0x400);
    o->oMoveAngleRoll = approach_s16_symmetric(o->oMoveAngleRoll, 0x2000 * sins(0x100 * gMarioState->controller->stickX) * coss(0x100 * gMarioState->controller->stickY), 0x400);

    obj_update_gfx_pos_and_angle(o);
    //if (obj_has_behavior(node, bhvTestplane)) {

        Mat4 *transform = &o->transform;

                    Vec3f rotPos;
                    vec3f_copy(rotPos, gMarioState->pos);
                    Vec3f antiRotPos;
                    antiRotPos[0] = -rotPos[0];
                    antiRotPos[1] = -rotPos[1];
                    antiRotPos[2] = -rotPos[2];

                    Mat4 mat1;
                    Mat4 mat2;
                    Mat4 result;
                    Mat4 result2;

                    mtxf_translate(mat1, antiRotPos);
                    mtxf_rotate_zxy_and_translate(mat2, rotPos, o->header.gfx.angle);

                    mtxf_mul(transform, mat1, mat2);

                    o->header.gfx.throwMatrix = transform;

                    //mtxf_scale_vec3f(result, *node->header.gfx.throwMatrix, node->header.gfx.scale);

                    //mtxf_mul(o->header.gfx.throwMatrix, result, result2);
                //}
}

