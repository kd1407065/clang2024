#include<stdio.h>
main()
{
	int su,i;
	su = 0;
	i = 0;
	printf("数を入れて:");
	scanf("%d", &su);
	for (0; i < 5; +1)
	{
		i++;
		printf("%d ", su * i);
	}
	printf("\n");
}