#include<stdio.h>
main()
{
	int su, gokei;
	su = 0;
	gokei = 0;
	float i;
	i = 0;
	printf("”‚ÍH");
	scanf("%d", &su);
	for (; su != -999;)
	{
		printf("”‚ÍH");
		gokei += su;
		scanf("%d", &su);
		i++;
	}
	printf("‡Œv%d\t•½‹Ï%.2f\n", gokei, gokei / i);
}