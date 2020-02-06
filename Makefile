GCC=gcc
CFLAGS=-Wall 

all: donut

donut: lab2.c
	$(GCC) $(CFLAGS) lab2.c -o donut -lm 

.PHONY: clean

clean:
	@rm -rf *.o a.out donut 2>/dev/null

