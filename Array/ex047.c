#include<stdio.h>
main()
{
	int ia, ib;
	float x[3][2];
	float gokei;
	for (ia = 0; ia <= 2; ia++)
	{
		for (ib = 0; ib <= 1; ib++)
		{
			printf("x[%d][%d]=", ia, ib);
			scanf("%f", &x[ia][ib]);
		}
		printf("%ds–Ú‚Ì•½‹Ï=%.2f\n\n", ia, (x[ia][0] + x[ia][1]) / 2.0);
	}
}