ASM = spasm

EMU = tilem2

ARGS = "-A"

DEBUG_ARGS = "-T"

FILES = famwars.z80 \
    ion.inc \
    maps.inc \
    ti83plus.inc \
    tilemap.z80 \
    tiles.inc\

FILES_TO_ASM =	\
    famwars.z80

OUTPUT		= "famwars.8xp"

all: ${FILES}
		${ASM} ${ARGS} ${FILES_TO_ASM} ${OUTPUT}

famwars: ${FILES}
		${ASM} ${ARGS} ${FILES_TO_ASM} ${OUTPUT}

debug: ${FILES}
		${ASM} ${ARGS} ${DEBUG_ARGS} ${FILES_TO_ASM} ${OUTPUT}

emulate: ${FILES}
		${ASM} ${ARGS} ${FILES_TO_ASM} ${OUTPUT}
		${EMU} ${OUTPUT}

clean:
		rm -f *.lst
		rm -f *.8xp
