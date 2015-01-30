tile_data:
;tile 0
.db 0,0,0,0,0,0,0,0
;tile 1
.db %11111111
.db %11000001
.db %10100101
.db %10010001
.db %10001001
.db %10100101
.db %10000011
.db %11111111
#include "sprites/tile_airport.bmp"		; 2		set bit 7 for neutral tile
#include "sprites/tile_airport2.bmp"	; 3		only do so for player tiles
#include "sprites/tile_base.bmp"		; 4		not __2 tiles
#include "sprites/tile_base2.bmp"		; 5
#include "sprites/tile_city.bmp"		; 6
#include "sprites/tile_city2.bmp"		; 7
#include "sprites/tile_factoryb.mp"		; 8
#include "sprites/tile_factory2.bmp"	; 9
#include "sprites/tile_village.bmp"		; 10
#include "sprites/tile_village2.bmp"	; 11