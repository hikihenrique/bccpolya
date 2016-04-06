C = gcc
CFLAGS = -W -Wall -pedantic -std=c11

SRC = $(wildcard *.c)
BIN = $(SRC:.c=)

.PHONY: all clear

all: $(BIN)

clear:
	@rm -f $(BIN)	

%:%.c
	@$(CC) $< -o $@ $(CFLAGS) && echo " [OK]"