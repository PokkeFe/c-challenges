CC=gcc
CFLAGS=-I./
DEPS = pythago.h
OBJ = interface.o pythago.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

program.exe: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -rf *.o *.exe