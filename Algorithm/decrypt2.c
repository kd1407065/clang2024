#include<stdio.h>
main()
{
	char s[100];
	int k[100];
	int i;
	i = 0;

	printf("���������͂��ĉ�������");
	scanf("%s", &s[0]);

	while (s[i] != '\0')
	{
		printf("s[%d]�̕������L�[��", i);
		scanf("%d", &k[i]);
		s[i] = s[i] - k[i];
		i++;
	}
	printf("�������ςݕ�����́A%s\n", &s[0]);
}