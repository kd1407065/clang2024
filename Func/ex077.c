#include<stdio.h>
void keisan(int x, int y, int z, int* dai, int* syo);
main()
{
	int a, b, c, d, s;
	printf("整数を3つ入力:");
	scanf("%d%d%d", &a, &b, &c);
	keisan(a, b, c, &d, &s);
	printf("最大値=%d 最小値=%d\n", d, s);
}
void keisan(int x, int y, int z, int* dai, int* syo)
{
	*dai = x;
	if (y > *dai)
	{
		*dai = y;
	}
	if (z > *dai)
	{
		*dai = z;
	}
	*syo = x;
	if (y < *syo)
	{
		*syo = y;
	}
	if (z < *syo)
	{
		*syo = z;
	}
	return;
}