#include<stdio.h>
main()
{
	int i;
	i = 0;
	while (i != -1)
	{
		printf("�����R�[�h(-1�œ��͏I��)�H");
		scanf("%d", &i);
		if (i != -1)
		{
			printf("%c\n", i);
		}
	}
	printf("\n");
}