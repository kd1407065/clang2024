#include<stdio.h>
main()
{
	int su;
	printf("��������:");
	scanf("%d", &su);
	while (su>0)
	{
		printf("*");
		su -= 1;
	}
	printf("\n");
}