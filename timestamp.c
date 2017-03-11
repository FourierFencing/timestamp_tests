# include <time.h>
# include <stdio.h>
# include <unistd.h>
# include <pigpio.h>

int main() {

	int c = 10;
	int secs, mics;

	while (c > -1) {
	//char dt[20];
	//struct tm tm;
	//time_t current_time;
	//current_time = time(NULL);
	//tm = *localtime(&current_time);
	//strftime(dt, sizeof dt, "%H:%M:%S.000", &tm);

	if (gpioInitialise()<0) return 1;

	gpioTime(PI_TIME_ABSOLUTE, &secs, &mics);

	printf("%d %d.%06d\n", c, secs, mics);
	fflush(stdout);
	sleep(1);
	c--;
	}

	// printf("\n%s\n", dt);
	return 0;
}
