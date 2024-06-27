#include<stdio.h>
main()
{
	int su, i;
	su = 0;
	printf("”‚ÍH");
	scanf("%d", &su);
	do
	{
		i = 5;
		do
		{
			printf("*");
			i--;
		} while (i > 0);
		printf("\n");
		su--;
	} while (su > 0);
}