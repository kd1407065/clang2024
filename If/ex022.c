#include<stdio.h>
main()
{
	int no;
	printf("��������:");
	scanf("%d", &no);
	if (no < 1989) {
		printf("�������܂�ł͂���܂���\n");
	}
	else {
		if (no < 2020) {
			printf("�������܂�ł�\n");
		}
		else
		{
			printf("�������܂�ł͂���܂���\n");
		}
	}
}