#include<stdio.h>
main()
{
	char moji;
	printf("���������:");
	scanf("%c", &moji);
	if (moji >='a' && moji <= 'z')
	{
		printf("�ϊ������%c\n", moji - 32);
	}
	else
	{
		if (moji>='A' && moji<='Z')
		{
			printf("�ϊ������%c\n", moji + 32);
		}
		else
		{
			printf("error\n");
		}
	}
}