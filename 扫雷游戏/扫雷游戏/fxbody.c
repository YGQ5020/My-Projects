#include"fxlist.h"


//显示菜单
void DispayMenu()
{
	printf("|---------------------------------|\n");
	printf("|                                 |\n");
	printf("|           1、开始游戏           |\n");
	printf("|           0、退出游戏           |\n");
	printf("|                                 |\n");
	printf("|---------------------------------|\n");
}

//初始化棋盘
void InitBoard(char Board[ROW + 2][COL + 2], char a)
{
	for (int i = 0; i < ROW + 2; i++)
	{
		for (int j = 0; j < COL + 2; j++)
		{
			Board[i][j] = a;
		}
	}
}

//显示棋盘
void DisplayBoard(char Board[ROW + 2][COL + 2])
{
	for (int i = 0; i <= ROW; i++)
	{
		printf(" %d ", i);
		if (i < ROW)
		{
			printf("|");
		}
	}
	printf("\n");

	for (int i = 1; i <= ROW; i++)
	{
		if (i <= ROW)
		{
			for (int j = 1; j <= COL+1; j++)
			{
				printf("---");
				if (j == 1)
				{
					printf("|");
				}
				else if (j <= COL)
				{
					if (i == 1)
					{
						printf("-");
					}
					else
					{
						printf("+");
					}	
				}
			}
		}
		printf("\n");


		printf(" %d |", i);
		for (int j = 1; j <= COL; j++)
		{
			printf(" %c ", Board[i][j]);
			if (j < COL)
			{
				printf("|");
			}
		}
		printf("\n");
	}
}

//布雷
void SetMine(char mine[ROW+2][COL+2])
{
	for (int i = 0; i < lv1; i++)
	{
		int x = 0;
		int y = 0;
		srand((unsigned int)time(NULL));

		do
		{
			x = rand() % ROW + 1;
			y = rand() % COL + 1;

			//printf("%d,%d\n", x, y);
		} while (mine[x][y] != '0');
		mine[x][y] = '1';
	}
}

//Find mines
void FindMine(char board[ROW + 2][COL + 2])
{
	int y = 0;
	int x = 0;
	do
	{
		scanf_s("%d %d", &y, &x);
		if (y<1 || y>ROW || x<1 || x>COL)
		{
			system("cls");
			printf("Your intput is incorresct,please re-enter!!\n");
		}
	} while (y<1 || y>ROW || x<1 || x>COL);

}
