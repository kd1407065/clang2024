#include<stdio.h>
main()
{
	int i, g, s;
	g = 0;
	s = 0;

	printf("®”:");
	while (scanf("%d", &i) != EOF)
	{
		g += i;
		s++;
		printf("®”:");
	}
	printf("‡Œv%d •½‹Ï%.2f\n", g, (float)g / s);
}