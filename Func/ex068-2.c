#include<stdio.h>
main()
{
	char str[256];

	while (gets(str)!=NULL)//Ctrl+Zで終了
	{
		puts(str);//←出力後改行もしてくれる。
	}
}