#include "game.h"


void game()
{
	//�׵���Ϣ����
	//1.���ú��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };
	//2.�Ų���׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	//��ӡ����
	//Displayboard(mine, ROW, COL);
	Displayboard(show, ROW, COL);
	//������
	Setmine(mine, ROW, COL);
	Displayboard(mine, ROW, COL);
	//ɨ��
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
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ�����������ѡ��\n");
				break;
		}
	} while (input);

}


int main()
{
	test();
	return 0;
}