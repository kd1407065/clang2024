#include<stdio.h>
main()
{
	int a = 50, b = 10;
	int* p_a, * p_b;

	p_a = &a;
	p_b = &b;

	printf("%d+%d=%d\n", *p_a, *p_b, *p_a + *p_b);
}