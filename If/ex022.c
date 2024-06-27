#include<stdio.h>
main()
{
	int no;
	printf("¼—ï‚ğ“ü—Í:");
	scanf("%d", &no);
	if (no < 1989) {
		printf("•½¬¶‚Ü‚ê‚Å‚Í‚ ‚è‚Ü‚¹‚ñ\n");
	}
	else {
		if (no < 2020) {
			printf("•½¬¶‚Ü‚ê‚Å‚·\n");
		}
		else
		{
			printf("•½¬¶‚Ü‚ê‚Å‚Í‚ ‚è‚Ü‚¹‚ñ\n");
		}
	}
}