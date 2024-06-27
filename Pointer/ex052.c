#include<stdio.h>
main()
{
	int a = 100, b = 200;
	int* p_a, * p_b;
	int c;

	p_a = &a;
	p_b = &b;

	printf("実行前：a=%d   b=%d\n", *p_a, *p_b);

	c = *p_a;
	*p_a = *p_b;
	*p_b = c;

	printf("実行後：a=%d   b=%d\n", *p_a, *p_b);
}