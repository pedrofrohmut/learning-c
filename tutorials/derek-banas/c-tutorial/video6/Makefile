COMPILER=gcc

# recompile only unions
unions:
	@$(COMPILER) -c src/unions.c -o bin/unions.o
	@$(COMPILER) bin/unions.o -o out/unions.out

# recompile only linked-lists
linked-lists:
	@$(COMPILER) -c src/linked-lists.c -o bin/linked-lists.o
	@$(COMPILER) bin/linked-lists.o -o out/linked-lists.out


# Default
all:
	@$(COMPILER) -c src/unions.c -o bin/unions.o
	@$(COMPILER) bin/unions.o -o out/unions.out
	@$(COMPILER) -c src/linked-lists.c -o bin/linked-lists.o
	@$(COMPILER) bin/linked-lists.o -o out/linked-lists.out

# Clean up *.o and executable files
clean:
	rm bin/*.o
	rm out/unions.out
