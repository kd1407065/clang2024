#include<stdio.h>
main()
{
	int su, gokei;
	su = 0;
	gokei = 0;
	while (1)
	{
		printf("数を入れて:");
		scanf("%d", &su);
		if (su == -999)break;
		gokei += su;
	}	
	printf("合計＝%d\n", gokei);
}