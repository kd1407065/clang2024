#include<stdio.h>
main()
{
	int a[]= { 11,22,33,44,55,66 };
	int* pa;
	float b[] = { 11.1,22.2,33.3,44.4 };
	float* pb;
	int i, ga;
	float gb;

	pa = a;
	pb = b;

	for (ga = 0, i = 0; i < 6; i++)
	{
		ga += *pa;
		pa++;
	}
	printf("配列a 合計＝%d 平均＝%.3f\n", ga, ga / 6.0);

	for (gb = 0, i = 0; i < 4; i++)
	{
		gb += *pb;
		gb++;
	}
	printf("配列b 合計＝%.3f 平均＝%.3f\n", gb, gb / 4.0);
}