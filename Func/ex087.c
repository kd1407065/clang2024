#include<stdio.h>
main(int argc, char* argv[])
{
	int g;
	if (argc == 3)
	{
		g = atoi(argv[1]) + atoi(argv[2]);
		printf("%s+%s=%d\n", argv[1], argv[2], g);
	}
	else
	{
		printf("2�̈���(����)��ݒ肵�Ď��s���Ă�������\n");
	}
}