#include<stdio.h>
main()
{
	char s[100];
	int i;

	printf("�Í������������͂��ĉ�������");
	scanf("%s", &s[0]);
	i = 0;
	while (s[i] != '\0')
	{
		s[i]--;
		i++;
	}
	printf("�����ςݕ�����́A % s\n", &s[0]);
}