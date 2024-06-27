#include<stdio.h>
main()
{
	int E, su1, su2;
	printf("‰‰Zq‚ğ“ü—Í:");
	scanf("%d", &E);
	if (E == 1)
	{
		printf("2‚Â‚Ì®”‚ğ“ü—Í:");
		scanf("%d""%d", &su1, &su2);
		printf("%d\n", su1 + su2);
	}
	else
	{
		if (E == 2)
		{
			printf("2‚Â‚Ì®”‚ğ“ü—Í:");
			scanf("%d""%d", &su1, &su2);
			printf("%d\n", su1 - su2);
		}
		else
		{
			if (E == 3)
			{
				printf("2‚Â‚Ì®”‚ğ“ü—Í:");
				scanf("%d""%d", &su1, &su2);
				printf("%d\n", su1 * su2);
			}
			else
			{
				if (E == 4)
				{
					printf("2‚Â‚Ì®”‚ğ“ü—Í:");
					scanf("%d""%d", &su1, &su2);
					printf("%d\n", su1 / su2);
				}
				else
				{
					printf("error\n");
				}
			}
		}
	}
}