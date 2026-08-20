CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -std=c17 -ggdb
RAY_PATH=$(HOME)/programming/third-party/raylib-6.0/build/raylib

main: src/main.c
	$(CC) $(CFLAGS) -I$(RAY_PATH)/include/ -o bouncing_ball.out \
	src/main.c $(RAY_PATH)/libraylib.a \
	-lGL -lm -lX11
