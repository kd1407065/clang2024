#include<stdio.h>
main()
{
	float box[3], sum;
	sum = 0;
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("���������:");
		scanf("%f", &box[i]);
		sum += box[i];
	}
	printf("���v��%.2f�ł�\n", sum);
	printf("���ς�%.2f�ł�\n", sum / 3);
}