#include <stdio.h>
#include <stdint.h>
#include <time.h>

int64_t timespecDiff(struct timespec *timeA_p, struct timespec *timeB_p)

{
	return((timeA_p->tv_sec * 1000000000) + timeA_p->tv_nsec) - ((timeB_p->tv_sec * 1000000000) + timeB_p->tv_nsec);
}

int main(int argc, char **argv)
{
	struct timespec start, end;
	clock_gettime(CLOCK_MONOTONIC, &start);


	//stuff


	clock_gettime(CLOCK_MONOTINIC, &end);

	uint64_t timeElapsed = timespecDiff(&end, &start);
	int c = 10;
	while(c > -1) {
		printf("%ld", timeElapsed)
		fflush(stdout);
		sleep(1);
		c--;
		}
}
