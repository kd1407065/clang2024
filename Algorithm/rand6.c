#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int c, p;
	while (1)
	{
		printf("�����o���܂����H\n");
		printf("�i�P�F�O�[�@�Q�F�`���L�@�R�F�p�[�j");
		scanf("%d", &p);
		printf("\n");
		srand(time(0));
		rand();
		c = rand() % 3;
		switch (p)
		{
		case 1: printf("�v���C���[�́A�O�[�ł��B");
		case 2: printf("�v���C���[�́A�`���L�ł��B");
		case 3: printf("�v���C���[�́A�p�[�ł��B");
		}
		printf("\n");
		switch (c)
		{
		case 0: printf("�R���s���[�^�[�́A�O�[�ł��B");
		case 1: printf("�R���s���[�^�[�́A�`���L�ł��B");
		case 2: printf("�R���s���[�^�[�́A�p�[�ł��B");
		}
		switch (p)
		{
		case 1:switch (c)
		{
		case 0: printf("�������ł��B\n");
		case 1: printf("�v���C���[�̏����ł��B\n");
			break;
		case 2: printf("�R���s���[�^�[�̏����ł��B\n");
			break;
		}
		case 2:switch (c)
		{
		case 0: printf("�R���s���[�^�[�̏����ł��B\n");
			break;
		case 1: printf("�������ł��B\n");
		case 2: printf("�v���C���[�̏����ł��B\n");
			break;
		}
		case 3:switch (c)
		{
		case 0: printf("�v���C���[�̏����ł��B\n");
			break;
		case 1: printf("�R���s���[�^�[�̏����ł��B\n");
			break;
		case 2: printf("�������ł��B\n");
		}
		}
	}
	
}