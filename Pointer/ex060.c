#include<stdio.h>
main()
{
	int i,f;
	char c;
	char data[] = "Language";
	printf("data[]=%s\n", &data);
	printf("���������́H");
	scanf("%c", &c);
	printf("���������́A");
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
		printf("�����ڂł�\n");
	}
	else
	{
		printf("������܂���ł���\n");
	}
}