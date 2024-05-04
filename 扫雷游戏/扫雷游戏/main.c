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
			
			InitBoard(mine, '0');//初始化雷盘
			InitBoard(show, '*');//初始化显示的棋盘

			//printf("开发者视角\n");
			//DisplayBoard(mine);//显示雷区
			printf("\n玩家视角\n");
			
			DisplayBoard(show);//显示玩家界面
			system("cls");
			SetMine(mine);//布雷
			DisplayBoard(mine);//显示雷区
			while (1)
			{
			FindMine(mine);//Find mines
			}

		}
		
	}
	
}