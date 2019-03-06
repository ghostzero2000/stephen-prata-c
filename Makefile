BIN = ./bin
SRC = ./src
ODIR = obj
CC = gcc
CFLAGS = -std=c99 -Wall -g -I.
CFLAGS_PTHREAD = -std=c99 -Wall -g -I. -lpthread
LINT = splint
LINTFLAGS = +quiet +skip-sys-headers +charint

Listing2-1:
	$(CC) $(CFLAGS) $^ -o $(BIN)/$@ $(SRC)/$@.c
	