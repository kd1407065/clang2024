#include<stdio.h>
void keisan(int x, int y, int* g, float* h);
main()
{
	int a, b, g;
	float h;
	printf("������2����:");
	scanf("%d%d", &a, &b);
	keisan(a, b, &g, &h);
	printf("���v��%d�A���ς�%.2f\n", g, h);
}
void keisan(int x, int y, int* g, float* h)
{
	*g = x + y;
	*h = (x + y) / 2;
	return;
}