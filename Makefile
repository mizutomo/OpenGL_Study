CC = gcc

CFLAGS = -I/usr/X11R6/include
LDLIBS = -L/usr/X11R6/lib -lglut -lGLU -lGL

OBJS = prog1 prog2

all: $(OBJS)
prog1: prog1.c
	$(CC) $(CFLAGS) prog1.c -o prog1 $(LDLIBS)
prog2: prog2.c
	$(CC) $(CFLAGS) prog2.c -o prog2 $(LDLIBS)

clean:
	-rm $(OBJS)
