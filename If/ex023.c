#include<stdio.h>
main()
{
	int su;
	printf("•b”‚ğ“ü—Í:");
	scanf("%d", &su);
	if (5001 > su) {
		printf("%dŠÔ", su/3600);
		printf("%d•ª", (su % 3600) / 60);
		printf("%d•b", su % 60);
	}
	else
	{
		printf("error");
	}
}