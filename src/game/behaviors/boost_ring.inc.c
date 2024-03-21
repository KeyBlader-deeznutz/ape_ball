void bhv_boost_ring_init(void) {
    f32 dist;
    o->oParentRelativePosX = o->oPosX;
    o->oParentRelativePosY = o->oPosY;
    o->oParentRelativePosZ = o->oPosZ;
    o->parentObj = cur_obj_find_nearest_object_with_behavior(bhvTestplane, &dist);
    o->oOpacity = 255;

    o->oFaceAngleYaw = 0;
    o->oFaceAnglePitch = 0;
    o->oFaceAngleRoll = 0;
}

void bhv_boost_ring_loop(void) {
    if (o->oOpacity > 0) {
        o->oOpacity -= 9;
        if (o->oOpacity < 0) {
            o->oOpacity = 0;
        }
    }
    obj_scale_xyz(o, 1.0f + (f32)(o->oTimer) / 30.0f, 1.0f - (f32)(o->oTimer) / 40.0f, 1.0f + (f32)(o->oTimer) / 30.0f);

    if (o->oTimer == 30) {
        obj_mark_for_deletion(o);
    }
}

