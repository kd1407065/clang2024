#include<stdio.h>
main()
{
	int i,f;
	char c;
	char data[] = "Language";
	printf("data[]=%s\n", &data);
	printf("ŒŸõ•¶š‚ÍH");
	scanf("%c", &c);
	printf("ŒŸõ•¶š‚ÍA");
	f = 0;
	for (i = 0; i < 8; i++)
	{
		if (data[i] == c)
		{
			printf("%d ", i + 1);
			f = 1;
		}
	}
	if (f == 1)
	{
		printf("•¶š–Ú‚Å‚·\n");
	}
	else
	{
		printf("Œ©‚Â‚©‚è‚Ü‚¹‚ñ‚Å‚µ‚½\n");
	}
}