#include<stdio.h>
main()
{
	int su1,su2,su3,g;
	printf("�������R����:");
	scanf("%d%d%d", &su1, &su2, &su3);
	g = su1 + su2 + su3;
	printf("���v=%d", g);
	printf("   ����=% .2f\n", (float)g / 3);
}