#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int su;
	srand(time(0));
	rand();
	su = rand() % 100 + 1;
	if (su <= 30)
	{
		printf("かいしんのいちげき！\n");
	}
	else
	{
		printf("通常攻撃\n");
	}
}