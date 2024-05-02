CC=gcc
CFLAGS=-Wall -Wextra -Werror --std=c89
SOURCES=pcalc.c
TEST=x^3+2x^2+9x+8

pcalc: ${SOURCES}
	clear
	${CC} ${CFLAGS} -o pcalc ${SOURCES}

run: pcalc
	clear
	chmod +x ./pcalc
	./pcalc
