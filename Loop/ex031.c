#include<stdio.h>
main()
{
	int i, w;
	i = 0;
	w = 0;
	for (0; i < 10; +1)
	{
		i++;
		printf("1����%d�܂ł̘a=%d\n", i, w + i);
		w = w + i;
	}
}