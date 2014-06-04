include ../make.inc

all: main.o
	$(CC) $(OPTS) $(LINK) $^
	$(RM) *.o

main.o: main.cpp
	$(CC) $(OPTS) $(INCLUDE) -c $^
