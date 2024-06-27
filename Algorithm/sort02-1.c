#include<stdio.h>
#define SIZE 5
main()
{
	int d[SIZE] = { 30, 7, 25, 16, 10 };
	int i, j, w, s, sa;

	printf("ソート前\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("d[%d]=%d ", i, d[i]);
	}

	while (d[0] < d[1] || d[1] < d[2] || d[2] < d[3] || d[3] < d[4])
	{
		for (i = SIZE - 1; i > 0; i--)
		{
			for (j = 0; j < i; j++)
			{
				if (d[j] > d[j + 1])
				{
					w = d[j];
					d[j] = d[j + 1];
					d[j + 1] = w;
				}
			}
		}
		for (s = SIZE - 1; s > 1; s--)
		{
			for (sa = s - 1; sa >= 0; sa--)
			{
				if (d[sa] > d[sa + 1])
				{
					w = d[sa];
					d[j] = d[sa + 1];
					d[sa + 1] = w;
				}
			}

		}
	}
	printf("\n\nソート後\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("d[%d]=%d ", i, d[i]);
	}
	printf("\n");
}