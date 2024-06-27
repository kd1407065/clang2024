#include<stdio.h>
main()
{
	int tbl[][3] = { {10,20,30},{40,50,60},{70,80,90} };
	int* p_tbl, ia, ib;
	p_tbl = tbl[0];
	printf("2ŽŸŒ³”z—ñtbl‚Ì“à—e\n");
	for (ia = 0; ia < 3; ia++)
	{
		for (ib = 0; ib < 3; ib++)
		{
			printf("%d ", *p_tbl++);
		}
		printf("\n");
	}
	printf("\n");
}