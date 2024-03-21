void bhv_boost_particle_init(void) {
    o->oOpacity = 255;
}

void bhv_boost_particle_loop(void) {

    if (o->oOpacity > 0) {
        o->oOpacity -= 9;
        if (o->oOpacity < 0) {
            o->oOpacity = 0;
        }
    }

    o->oPosX += o->oVelX;
    o->oPosY += o->oVelY;
    o->oPosZ += o->oVelZ;

    obj_scale_xyz(o, 1.0f + (f32)(o->oTimer) / 30.0f, 1.0f + (f32)(o->oTimer) / 30.0f, 1.0f - (f32)(o->oTimer) / 40.0f);
    if (o->oTimer == 30) {
        obj_mark_for_deletion(o);
    }

    o->oVelX *= 0.98f;
    o->oVelY *= 0.94f;
    o->oVelZ *= 0.98f;
}

