#include<stdio.h>
main()
{
	int su;
	printf("•b”‚ð“ü—Í:");
	scanf("%d", &su);
	if (5001 > su)
	{
		if (0 > su)
		{
			printf("error\n");
		}

		else
		{
			printf("%dŽžŠÔ", su / 3600);
			printf("%d•ª", (su % 3600) / 60);
			printf("%d•b\n", su % 60);
		}
	}
	else
	{
		printf("error\n");
	}
}