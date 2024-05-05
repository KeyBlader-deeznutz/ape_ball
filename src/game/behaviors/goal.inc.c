void bhv_goal_init(void) {
f32 dist;
o->parentObj = cur_obj_find_nearest_object_with_behavior(bhvTestplane, &dist);
o->oParentRelativePosX = o->oPosX;
    o->oParentRelativePosY = o->oPosY;
    o->oParentRelativePosZ = o->oPosZ;
}

void bhv_goal_loop(void) {
f32 dist;
o->parentObj = cur_obj_find_nearest_object_with_behavior(bhvTestplane, &dist);   

}

