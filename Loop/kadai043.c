#include<stdio.h>
main()
{
	int i;
	i = 0;
	while (i != -1)
	{
		printf("文字コード(-1で入力終了)？");
		scanf("%d", &i);
		if (i != -1)
		{
			printf("%c\n", i);
		}
	}
	printf("\n");
}