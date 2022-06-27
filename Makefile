CC=clang
CFLAGS=-g -Wall
BIN=test

all: $(BIN)

%: %.c
	$(CC) $(CFLAGS) $^ -o $@

pre:
	$(CC) $(CFLAGS) -E test.c

clean:
	$(RM) -r $(BIN) *.dSYM
