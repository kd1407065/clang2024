#include<stdio.h>
main()
{
	int m;
	printf("月を入力:");
	scanf("%d", &m);
	if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
	{
		printf("最終日は31日です\n");
	}
	else
	{
		if (m==4 || m==6 || m==9 || m==11)
		{
			printf("最終日は30日です\n");
		}
		else
		{
			if (m==2)
			{
				printf("最終日は29日です\n");
			}
			else
			{
				printf("error\n");
			}
		}
	}
}