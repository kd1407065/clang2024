#include<stdio.h>
main()
{
	int ia, ib, ic, gokei;
	gokei = 0;
	int a[2][2][3] = { {{3,4,5,},{4,5,6}},{{2,2,3},{2,5,6}} };
	for (ia = 0; ia <= 1; ia++)
	{
		printf("アパート%d", ia + 1);
		for (ib = 0; ib <= 1; ib++)
		{
			printf("(%d階):",ib + 1);
			for (ic = 0; ic <= 2; ic++)
			{
				printf("%d ", a[ia][ib][ic]);
				gokei += a[ia][ib][ic];
			}
			printf("  ");
		}
		printf("\n");
	}
	printf("全体で %d 人住んでいます\n", gokei);
}