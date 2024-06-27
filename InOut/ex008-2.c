#include<stdio.h>
main()
{
	int a = 5;
	float b = 5.0;
	printf("b/3=%8.3f \n", b / 3.0);
	printf("b/3=%.3f \n", b / 3.0);
	printf("a/2=%d \n",a/2);
	b = a/ 2;
	printf("a/2=%f \n", b);
	printf("a/2=%f \n", a / 2.0);
}