#include "game.h"


void game()
{
	//雷的信息储存
	//1.布置好雷的信息
	char mine[ROWS][COLS] = { 0 };
	//2.排查出雷的信息
	char show[ROWS][COLS] = { 0 };
	//初始化
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	//打印棋盘
	//Displayboard(mine, ROW, COL);
	Displayboard(show, ROW, COL);
	//布置雷
	Setmine(mine, ROW, COL);
	Displayboard(mine, ROW, COL);
	//扫雷
	Findmine(mine, show, ROW, COL);
}
void memu()
{
	printf("*****************************************\n");
	printf("**************   1. PLAY   **************\n");
	printf("**************   0. EXIT   **************\n");
	printf("*****************************************\n");
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		memu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误，请重新选择！\n");
				break;
		}
	} while (input);

}


int main()
{
	test();
	return 0;
}