#include<stdio.h>
main()
{
	int a = 100, b = 200;
	int* p_a, * p_b, * c;

	p_a = &a;
	p_b = &b;

	printf("���s�O�Fp_a=%d   p_b=%d\n", *p_a, *p_b);

	c = p_a;
	p_a = p_b;
	p_b = c;

	printf("���s��Fp_a=%d   p_b=%d\n", *p_a, *p_b);
}