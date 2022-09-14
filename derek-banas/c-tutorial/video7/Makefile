COMPILER=gcc
FLAGS=-std=c99

bool:
	@${COMPILER} -c ${FLAGS} src/bool.c -o bin/bool.o
	@${COMPILER} bin/bool.o -o out/bool.out

str:
	@${COMPILER} -c ${FLAGS} src/str.c -o bin/str.o
	@${COMPILER} bin/str.o -o out/str.out

char:
	@${COMPILER} -c ${FLAGS} src/char.c -o bin/char.o
	@${COMPILER} bin/char.o -o out/char.out

strings:
	@${COMPILER} -c ${FLAGS} src/strings.c -o bin/strings.o
	@${COMPILER} bin/strings.o -o out/strings.out

chars:
	@${COMPILER} -c ${FLAGS} src/chars.c -o bin/chars.o
	@${COMPILER} bin/chars.o -o out/chars.out

clean:
	rm -f bin/*.o
	rm -f out/*.out
