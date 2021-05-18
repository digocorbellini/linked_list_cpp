CC = g++
CFLAGS = -o runner -g
FILES = runner.cpp

all:
	$(CC) $(CFLAGS) $(FILES)

run:
	@$(CC) $(CFLAGS) $(FILES)
	@runner