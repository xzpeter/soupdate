CFLAGS=-g -O0 -Wall -Werror

.PHONY: clean all run

all: main libtestlib.so.1 libtestlib.so.2

main: main.o libtestlib.so.1
	@gcc -o $@ $^

libtestlib.so.1: testlib1.c
	@gcc -shared -fPIC $(CFLAGS) -o $@ $<

libtestlib.so.2: testlib2.c
	@gcc -shared -fPIC $(CFLAGS) -o $@ $<

run:
	@LD_LIBRARY_PATH=. ./main

clean:
	@rm -rf *.so.* *.o main
