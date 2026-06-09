CC ?= gcc

CFLAGS = -Wall -Wextra -O2 -Iinc

TARGET := filetool

SRC := $(wildcard src/*.c)
OBJ := $(patsubst src/%.c,Build/obj/%.o,$(SRC))

$(TARGET): $(OBJ)
	@mkdir -p Build/bin
	$(CC) $(OBJ) -o $(TARGET)

Build/obj/%.o: src/%.c
	@mkdir -p Build/obj
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf Build

.PHONY: clean