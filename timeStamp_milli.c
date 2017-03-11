long int start_time;
long int time_difference;
struct timespec gettine_now;

clock_gettime(CLOCK_REALTIME, &gettime_now);
start_time = gettime_now.tv_nsec;

while(1)
{
	clock_getime(CLOCK_REALTIME, &gettime_now);
	time_difference = gettime_now.tv_nsec - start_time;
	if (time_difference < 0)
		time_difference += 1000000000;
	if (time_difference > (delay_us * 1000))
		break;
}
