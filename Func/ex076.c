#include<stdio.h>
void keisan(int x, int y, int* g, float* h);
main()
{
	int a, b, g;
	float h;
	printf("整数を2つ入力:");
	scanf("%d%d", &a, &b);
	keisan(a, b, &g, &h);
	printf("合計は%d、平均は%.2f\n", g, h);
}
void keisan(int x, int y, int* g, float* h)
{
	*g = x + y;
	*h = (x + y) / 2;
	return;
}