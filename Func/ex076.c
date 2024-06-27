#include<stdio.h>
void keisan(int x, int y, int* g, float* h);
main()
{
	int a, b, g;
	float h;
	printf("®”‚ğ2‚Â“ü—Í:");
	scanf("%d%d", &a, &b);
	keisan(a, b, &g, &h);
	printf("‡Œv‚Í%dA•½‹Ï‚Í%.2f\n", g, h);
}
void keisan(int x, int y, int* g, float* h)
{
	*g = x + y;
	*h = (x + y) / 2;
	return;
}