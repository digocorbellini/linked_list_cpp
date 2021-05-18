CC = g++
CFLAGS = -o runner -g

all:
	$(CC) $(CFLAGS) runner.cpp Linkedlist.cpp