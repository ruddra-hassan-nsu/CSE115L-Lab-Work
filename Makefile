CC = gcc
CFLAGS = -Wall -Wextra

SRC = $(wildcard lab-*/*.c)
BIN = $(patsubst %.c,build/%,$(SRC))

all: $(BIN)

build/%: %.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $< -o $@ -lm

clean:
	rm -rf build

.PHONY: all clean
