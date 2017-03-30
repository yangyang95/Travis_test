#include <stdio.h>
#include <time.h>

int main() {
	struct timespec start, end;

	clock_gettime(CLOCK_REALTIME, &start);
	printf("Hello world\n");
	clock_gettime(CLOCK_REALTIME, &end);
	printf("time: %ld", start.tv_nsec - end.tv_nsec);
	return 0;
}