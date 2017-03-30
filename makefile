all:
	gcc -std=gnu99 -o hello main.c -lrt

clean:
	rm -rf hello