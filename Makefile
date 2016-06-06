mylib.o: mylib.h mylib.c
	gcc -c -Wall -Werror -fpic mylib.c

libmylib.so: mylib.o
	gcc -shared -o libmylib.so mylib.o

call_lib: main.c libmylib.so
	gcc -L. -Wall -o call_lib main.c -lmylib

run: call_lib
	export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:`pwd .`; ./call_lib

clean:
	-rm *.so *.o call_lib
