#include<stdio.h>
main()
{
	int i,su;
	printf("��������:");
	scanf("%d", &su);
	i = 0;
	while (i<su)
	{
		printf("*");
		i++;
	}
	printf("\n");
}