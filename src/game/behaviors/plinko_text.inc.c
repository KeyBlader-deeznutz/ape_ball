void bhv_plinko_text_init(void) {

}

void bhv_plinko_text_loop(void) {
    if (o->oTimer % 6 == 0) {
        o->oPosY += 19;
        o->oPosX += 19;
    }   
    if (o->oTimer % 6 == 3) {
        o->oPosY -= 19;
        o->oPosX -= 19;
    }   
}

