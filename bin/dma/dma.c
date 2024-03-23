#include <ultra64.h>

#include "sm64.h"
#include "make_const_nonconst.h"

ALIGNED8 const u8 gangnam_textures_dma[] = {
    #include "actors/amp/gangnam0.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam1.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam2.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam3.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam4.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam5.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam6.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam7.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam8.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam9.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam10.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam11.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam12.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam13.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam14.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam15.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam16.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam17.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam18.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam19.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam20.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam21.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam22.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam23.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam24.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam25.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam26.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam27.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam28.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam29.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam30.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam31.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam32.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam33.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam34.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam35.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam36.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam37.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam38.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam39.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam40.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam41.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam42.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam43.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam44.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam45.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam46.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam47.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam48.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam49.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam50.rgba16.inc.c"
    ,
    #include "actors/amp/gangnam51.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam52.rgba16.inc.c"
     ,
    #include "actors/amp/gangnam53.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam54.rgba16.inc.c"
    ,
    #include "actors/amp/gangnam55.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam56.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam57.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam58.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam59.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam60.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam61.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam62.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam63.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam64.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam65.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam66.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam67.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam68.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam69.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam70.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam71.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam72.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam73.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam74.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam75.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam76.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam77.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam78.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam79.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam80.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam81.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam82.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam83.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam84.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam85.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam86.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam87.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam88.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam89.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam90.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam91.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam92.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam93.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam94.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam95.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam96.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam97.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam98.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam99.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam100.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam101.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam102.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam103.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam104.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam105.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam106.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam107.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam108.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam109.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam110.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam111.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam112.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam113.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam114.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam115.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam116.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam117.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam118.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam119.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam120.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam121.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam122.rgba16.inc.c" 
    ,
    #include "actors/amp/gangnam123.rgba16.inc.c" 
    };