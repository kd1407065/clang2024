#include<stdio.h>
main()
{
	int su, gokei;
	su = 0;
	gokei = 0;
	float i;
	i = 0;
	printf("���́H");
	scanf("%d", &su);
	for (; su != -999;)
	{
		printf("���́H");
		gokei += su;
		scanf("%d", &su);
		i++;
	}
	printf("���v��%d\t���ρ�%.2f\n", gokei, gokei / i);
}