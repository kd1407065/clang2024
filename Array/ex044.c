#include<stdio.h>
main()
{
	char m1[100], m2[100], w[80];
	int i;

	printf("������P�����:");
	scanf("%s", &m1[0]);
	printf("������Q�����:");
	scanf("%s", &m2[0]);
	printf("moji1=%s  moji2=%s\n", &m1[0], &m2[0]);
	printf("����ւ����\n");
	for (i = 0; w[i] = m1[i]; i++);
	for (i = 0; m1[i] = m2[i]; i++);
	for (i = 0; m2[i] = w[i]; i++);
	printf("moji1=%s  moji2=%s\n", &m1[0], &m2[0]);
}