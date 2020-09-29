CC=gcc
CFLAGS=-I./
DEPS = armstrong.h
OBJ = interface.o armstrong.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

program.exe: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -rf *.o *.exe