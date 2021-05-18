CC = g++
CFLAGS = -o runner -g

all:
	$(CC) $(CFLAGS) runner.cpp Linkedlist.cpp

run:
	@$(CC) $(CFLAGS) runner.cpp Linkedlist.cpp
	@runner