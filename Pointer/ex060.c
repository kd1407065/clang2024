#include<stdio.h>
main()
{
	int i,f;
	char c;
	char data[] = "Language";
	printf("data[]=%s\n", &data);
	printf("検索文字は？");
	scanf("%c", &c);
	printf("検索文字は、");
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
		printf("文字目です\n");
	}
	else
	{
		printf("見つかりませんでした\n");
	}
}