#include<stdio.h>
main()
{
	int su;
	printf("�b�������:");
	scanf("%d", &su);
	if (5001 > su)
	{
		if (0 > su)
		{
			printf("error\n");
		}

		else
		{
			printf("%d����", su / 3600);
			printf("%d��", (su % 3600) / 60);
			printf("%d�b\n", su % 60);
		}
	}
	else
	{
		printf("error\n");
	}
}