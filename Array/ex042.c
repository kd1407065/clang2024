#include<stdio.h>
main()
{
	char data[] = "Apple";
	int i;
	printf("1�������\��\n");
	for (i = 0; i < 5; i++)
	{
		printf("%c", data[i]);
	}
	printf("\n������ŕ\��\n");
	printf("%s\n", &data[0]);

}