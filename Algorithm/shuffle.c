#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, data[20],ta,wo;
	for (i = 0; i < 20; i++)
	{
		data[i] = i + 1;
		//printf("data[%d]=%d\n", i, data[i]);
	}
	srand(time(0));
	for (i = 0; i < 20; i++)
	{
		ta = rand() % 20;
		wo = data[i];
		data[i] = data[ta];
		data[ta] = wo;
	}
	for (i = 0; i < 20; i++)
	{
		printf("data[%d]=%d\n", i, data[i]);
	}
}