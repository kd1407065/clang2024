#include<stdio.h>
main()
{
	int su;
	printf("秒数を入力:");
	scanf("%d", &su);
	if (5001 > su)
	{
		if (0 > su)
		{
			printf("error\n");
		}

		else
		{
			printf("%d時間", su / 3600);
			printf("%d分", (su % 3600) / 60);
			printf("%d秒\n", su % 60);
		}
	}
	else
	{
		printf("error\n");
	}
}