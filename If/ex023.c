#include<stdio.h>
main()
{
	int su;
	printf("�b�������:");
	scanf("%d", &su);
	if (5001 > su) {
		printf("%d����", su/3600);
		printf("%d��", (su % 3600) / 60);
		printf("%d�b", su % 60);
	}
	else
	{
		printf("error");
	}
}