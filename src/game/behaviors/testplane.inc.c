#include "actors/group0.h"
#include "levels/wf/header.h"

void bhv_testplane_init(void) {
    switch (o->oBehParams2ndByte) {
        case 1:
            obj_set_collision_data(o, stage1_collision);
            break;
        case 2:
            obj_set_collision_data(o, stage2_collision);
            break;
        case 3:
            obj_set_collision_data(o, stage3_collision);
            break;
        case 4:
            obj_set_collision_data(o, stage4_collision);
            break;
        case 5:
            obj_set_collision_data(o, stage5_collision);
            break;
        case 6:
            obj_set_collision_data(o, stage6_collision);
            break;
        case 7:
            obj_set_collision_data(o, stage7_collision);
            break;
        case 8:
            obj_set_collision_data(o, stage8_collision);
            break;
        case 9:
            obj_set_collision_data(o, stage9_collision);
            break;
        case 10:
            obj_set_collision_data(o, stage10_collision);
            break;
        case 11:
            obj_set_collision_data(o, stage11_collision);
            break;
    }
}

void bhv_testplane_loop(void) {

    s16 camYaw = atan2s(-gMarioState->controller->stickY, gMarioState->controller->stickX)
                 + gMarioState->area->camera->yaw;

    o->oMoveAnglePitch = approach_s16_symmetric(
        o->oMoveAnglePitch, 0x60 * gMarioState->controller->stickMag * coss(camYaw), 0x400);
    o->oMoveAngleRoll = approach_s16_symmetric(
        o->oMoveAngleRoll, 0x60 * gMarioState->controller->stickMag * -sins(camYaw), 0x400);

    if (gGoalFanfare == 1) {
        o->oMoveAnglePitch = 0;
        o->oMoveAngleRoll = 0;
    }

    obj_update_gfx_pos_and_angle(o);

    Mat4 *transform = &o->transform;

    Vec3f rotPos;
    vec3f_copy(rotPos, gMarioState->pos);
    Vec3f antiRotPos;
    antiRotPos[0] = -rotPos[0];
    antiRotPos[1] = -rotPos[1];
    antiRotPos[2] = -rotPos[2];

    Mat4 mat1;
    Mat4 mat2;

    mtxf_translate(mat1, antiRotPos);
    mtxf_rotate_zxy_and_translate(mat2, rotPos, o->header.gfx.angle);

    mtxf_mul(transform, mat1, mat2);

    o->header.gfx.throwMatrix = transform;
}
