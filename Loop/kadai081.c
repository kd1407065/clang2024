#include<stdio.h>
main()
{
	int i, g, j;
	i = 0;
	g = 0;
	j = 0;
	while (1)
	{
		printf("����(-999�ŏI��)�H");
		scanf("%d", &i);
		if (i == -999)
		{
			break;
		}
		g += i;
		j++;
	}
	printf("���v=%d\n����=%.3f\n", g, (float)g / j);
}