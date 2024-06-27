#include<stdio.h>
#define SIZE 8
main()
{
	int d[SIZE] = { 70,60,80,50,40,20,30,10 };
	int i, j, w;
	int gap;

	gap = SIZE / 2;
	while (gap > 0)
	{
		for (i = gap; i < SIZE; i++)
		{
			for (j = i - gap; j >= 0; j -= gap)
			{
				int k;
				for (k = 0; k < SIZE; k++)
				{
					printf("%d ", d[k]);
				}
				printf("\n");

				if (d[j + gap] < d[j])
				{
					w = d[j];
					d[j] = d[j + gap];
					d[j + gap] = w;
				}
				else
				{
					break;
				}
			}
		}
		gap = gap / 2;
		printf("-------------------------\n");
	}
	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", d[i]);
	}
	printf("\n");
}