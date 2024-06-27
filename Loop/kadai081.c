#include<stdio.h>
main()
{
	int i, g, j;
	i = 0;
	g = 0;
	j = 0;
	while (1)
	{
		printf("®”(-999‚ÅI—¹)H");
		scanf("%d", &i);
		if (i == -999)
		{
			break;
		}
		g += i;
		j++;
	}
	printf("‡Œv=%d\n•½‹Ï=%.3f\n", g, (float)g / j);
}