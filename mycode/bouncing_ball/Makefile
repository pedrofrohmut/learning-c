# ============================================================
# Bouncing Ball build script
# After months away: `make` builds, `make run` plays,
# `make debug` makes a gdb-friendly binary, `make clean` cleans.
# ============================================================

CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -std=c17 -O2
DEBUG_CFLAGS=-Wall -Wextra -Wpedantic -std=c17 -ggdb -Og
RAY_PATH=$(HOME)/programming/third-party/raylib-6.0/build/raylib
OUTPUT=bouncing_ball.out
DEBUG_OUTPUT=debug.out

# .PHONY: these are recipe labels, not real files. Without it,
# make skips a target if a file with that name happens to exist.
.PHONY: all run clean debug run-debug

# Rule anatomy:
#   target: dependencies
#       recipe        (tab-indented shell commands)
# make rebuilds a target only when a dependency is NEWER than
# it, or when the target file doesn't exist yet.

# First target = default. Plain `make` == `make all`.
all: $(OUTPUT)

# Run this when `src/main.c` changes
$(OUTPUT): src/main.c
	$(CC) $(CFLAGS) -I$(RAY_PATH)/include/ -o $(OUTPUT) \
	src/main.c $(RAY_PATH)/libraylib.a \
	-lGL -lm -lX11

# Debug build: builds only on `make debug`. make will NOT build
# it just because it shares the src/main.c dependency.
debug: $(DEBUG_OUTPUT)

$(DEBUG_OUTPUT): src/main.c
	$(CC) $(DEBUG_CFLAGS) -I$(RAY_PATH)/include/ -o $(DEBUG_OUTPUT) \
	src/main.c $(RAY_PATH)/libraylib.a \
	-lGL -lm -lX11

# builds then runs the executable
run: $(OUTPUT)
	./$(OUTPUT)

# builds then runs the debug executable
run-debug: $(DEBUG_OUTPUT)
	./$(DEBUG_OUTPUT)

# Remove the executable
clean:
	rm -f $(OUTPUT) $(DEBUG_OUTPUT)
