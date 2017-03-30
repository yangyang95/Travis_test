all:
	gcc -o hello main.c -lrt

clean:
	rm -rf hello