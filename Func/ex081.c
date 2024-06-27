#include<stdio.h>
int Max(int* array, int size);
int Min(int* array, int size);

main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 };
	printf("Å‘å’l=%d\n", Max(data, 8));
	printf("Å¬’l=%d\n", Min(data, 8));
}
int Max(int* array, int size)
{
	int i, max;
	for (max = *array, i = 1; i < size; i++)
	{
		if (max < *(array + 1))
		{
			max = *(array + i);
		}
	}
	return max;
}
int Min(int* array, int size)
{
	int i, min;
	for (min = *array, i = 1; i < size; i++)
	{
		if (min > *(array + i))
		{
			min = *(array + i);
		}
	}
	return min;
}
