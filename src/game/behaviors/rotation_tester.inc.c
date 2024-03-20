void bhv_rotation_tester_init(void) {
    f32 dist;
    o->oParentRelativePosX = o->oPosX;
    o->oParentRelativePosY = o->oPosY;
    o->oParentRelativePosZ = o->oPosZ;
    o->parentObj = cur_obj_find_nearest_object_with_behavior(bhvTestplane, &dist);
}

void bhv_rotation_tester_loop(void) {

}

