#include<stdio.h>
main()
{
	char str[256];

	while (gets(str)!=NULL)//Ctrl+Z�ŏI��
	{
		puts(str);//���o�͌���s�����Ă����B
	}
}