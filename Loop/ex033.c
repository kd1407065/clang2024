#include<stdio.h>
main()
{
	int su, gokei;
	su = 0;
	gokei = 0;
	float i;
	i = 0;
	printf("数は？");
	scanf("%d", &su);
	for (; su != -999;)
	{
		printf("数は？");
		gokei += su;
		scanf("%d", &su);
		i++;
	}
	printf("合計＝%d\t平均＝%.2f\n", gokei, gokei / i);
}