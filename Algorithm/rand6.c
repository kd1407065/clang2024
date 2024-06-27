#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int c, p;
	while (1)
	{
		printf("何を出しますか？\n");
		printf("（１：グー　２：チョキ　３：パー）");
		scanf("%d", &p);
		printf("\n");
		srand(time(0));
		rand();
		c = rand() % 3;
		switch (p)
		{
		case 1: printf("プレイヤーは、グーです。");
		case 2: printf("プレイヤーは、チョキです。");
		case 3: printf("プレイヤーは、パーです。");
		}
		printf("\n");
		switch (c)
		{
		case 0: printf("コンピューターは、グーです。");
		case 1: printf("コンピューターは、チョキです。");
		case 2: printf("コンピューターは、パーです。");
		}
		switch (p)
		{
		case 1:switch (c)
		{
		case 0: printf("あいこです。\n");
		case 1: printf("プレイヤーの勝ちです。\n");
			break;
		case 2: printf("コンピューターの勝ちです。\n");
			break;
		}
		case 2:switch (c)
		{
		case 0: printf("コンピューターの勝ちです。\n");
			break;
		case 1: printf("あいこです。\n");
		case 2: printf("プレイヤーの勝ちです。\n");
			break;
		}
		case 3:switch (c)
		{
		case 0: printf("プレイヤーの勝ちです。\n");
			break;
		case 1: printf("コンピューターの勝ちです。\n");
			break;
		case 2: printf("あいこです。\n");
		}
		}
	}
	
}