#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char s[100];
	int k[100];
	int i;
	int n;

	srand(time(0));

	printf("���������͂��ĉ�������");
	scanf("%s", &s[0]);

	i = 0;
	while (s[i] != '\0')
	{
		k[i] = rand() % 6;
		s[i] = s[i] + k[i];
		i++;
	}
	printf("�Í���������́A%s\n", &s[0]);
	printf("�Í����L�[�́A");
	for (n = 0; n < i; n++)
	{
		printf("%d", k[n]);
	}
	printf("\n");
}