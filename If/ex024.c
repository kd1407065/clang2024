#include<stdio.h>
main()
{
	char c;
	printf("���������:");
	scanf("%c", &c);
	if (c >= 'A' && c <= 'Z')
	{
		printf("�啶���ł�\n");
	}
	else
	{
		printf("���̑��̕����ł�\n");
	}
}