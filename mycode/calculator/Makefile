CC = gcc
SRC = src/main.c

# Raylib library path
RAYLIB_PATH = raylib-5.5_linux_amd64
RAYLIB_LIB = raylib-5.5_linux_amd64/lib/libraylib.a

# Compiler flags
CFLAGS = -Wall -Wextra -std=c99 -I$(RAYLIB_PATH)/include

# Linker flags
LDFLAGS = -L$(RAYLIB_PATH)/lib -lraylib -lm -ldl -lpthread

all: src/main.c $(RAYLIB_LIB)
	$(CC) $(CFLAGS) -o out/main.out $(SRC) $(LDFLAGS) && echo "Compiled successfully"

run:
	./out/main.out

clean:
	rm -rf out/*.out
