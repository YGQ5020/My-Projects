#include"fxlist.h"

int main()
{
	char mine[ROW + 2][COL + 2];
	char show[ROW + 2][COL + 2];

	while (1)
	{
		DispayMenu();
		printf("Please Choose!!\n");
		int choice = 0;
		scanf_s("%d", &choice);
		if (choice == 0)
		{
			printf("You have successfully exited the game!!");
			break;
		}
		else if(choice != 1)
		{
			continue;
		}
		else
		{
			
			InitBoard(mine, '0');//��ʼ������
			InitBoard(show, '*');//��ʼ����ʾ������

			//printf("�������ӽ�\n");
			//DisplayBoard(mine);//��ʾ����
			printf("\n����ӽ�\n");
			
			DisplayBoard(show);//��ʾ��ҽ���
			system("cls");
			SetMine(mine);//����
			DisplayBoard(mine);//��ʾ����
			while (1)
			{
			FindMine(mine);//Find mines
			}

		}
		
	}
	
}