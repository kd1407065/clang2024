#include<stdio.h>
main()
{
	int su, i, ia;
	printf("”‚ÍH");
	scanf("%d", &su);
	for (i = 0; i < su; i++)
	{
		for (ia = 1; ia < su - i; ia++)
		{
			printf(" ");
		}
		for (ia = 0; ia <= i; ia++)
		{
			printf("*");
		}
		printf("\n");
	}
}