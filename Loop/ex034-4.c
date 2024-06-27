#include<stdio.h>
main()
{
	int su, i, ia;
	su = 0;
	i = 0;
	ia = 0;
	printf("”‚ÍH");
	scanf("%d", &su);
	do
	{
		ia = 0;
		do
		{
			printf(" ");
			ia += 1;
		} while (ia < su);
		i += 1;
		ia = 0;
		do
		{
			printf("*");
			ia += 1;
		} while (i > ia);
		su -= 1;
		printf("\n");
	} while (su > 0);
}