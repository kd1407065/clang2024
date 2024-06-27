#include<stdio.h>
main()
{
	int ia, ib, gokei;
	int a[][3] = { {10,20,30},{1,2,3} };
	for (ia = 0; ia <= 1; ia++)
	{
		for (gokei = 0, ib = 0; ib <= 2; ib++)
		{
			printf("a[%d][%d]=%d\n", ia, ib, a[ia][ib]);
			gokei += a[ia][ib];
		}
		printf("%ds–Ú‚Ì‡Œv=%d\n\n", ia, gokei);
	}
}