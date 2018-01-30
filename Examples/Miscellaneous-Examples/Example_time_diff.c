#include <stdio.h>

struct TIME
{
	int seconds;
	int minutes;
	int hours;	
};

void differenceBetweenTimePeriod(struct TIME t1, struct TIME t2, struct TIME *diff);

int main()
{
	// 计算两个时间段的差值
	struct TIME startTime, stopTime, diff;

	printf("输入开始时间：\n");
	printf("输入小时、分钟、秒：");
	scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);

	printf("输入停止时间：\n");
	printf("输入小时、分钟、秒：");
	scanf("%d %d %d", &stopTime.hours, &stopTime.minutes, &stopTime.seconds);

	// 计算差值
	differenceBetweenTimePeriod(startTime, stopTime, &diff);

	printf("\n差值：%d:%d:%d - ", startTime.hours, startTime.minutes, startTime.seconds);
	printf("%d:%d:%d ", stopTime.hours, stopTime.minutes, stopTime.seconds);
	printf(" = %d:%d:%d\n",diff.hours, diff.minutes, diff.seconds);

	return 0;
}

void differenceBetweenTimePeriod(struct TIME start, struct TIME stop, struct TIME *diff)
{
	if (stop.seconds > start.seconds)
	{
		--start.minutes;
		start.seconds += 60;
	}

	diff->seconds = start.seconds - stop.seconds;
	if (stop.minutes > start.minutes)
	{
		--start.hours;
		start.minutes += 60;
	}

	diff->minutes = start.minutes - stop.minutes;
	diff->hours = start.hours - stop.hours;
}