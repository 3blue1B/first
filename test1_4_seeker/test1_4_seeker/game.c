#include "game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int p = 0;
	int q = 0;
	for (p = 0; p < ROWS; p++)
	{
		for (q = 0; q < COLS; q++)
		{
			board[p][q] = set;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-----minesweeper----\n");
	printf("0 ");
	for (i = 1; i <= row ;i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-----minesweeper----\n");


}
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = NUM;
	while (count)
	{
		int x = rand() % ROW + 1;
		int y = rand() % ROW + 1;
		if (board[x][y] != '1')
		{
			board[x][y] = '1';
			count--;
		}
	}

}
void UnfoldShow(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	int p = 0;
	int q = 0;
	int count = 0;
	int sum = 0;
	if (mine[x][y] == '0')
	{
		mine[x][y] = '2';



		for (p = x - 1; p <= x + 1; p++)
		{
			for (q = y - 1; q <= x + 1; q++)
			{
				if (p >= 1 && p <= 9 && q >= 1 && q <= 9 )
				{
					count++;
				}
			}

		}

		for (p = x - 1; p <= x + 1; p++)
		{
			for (q = y - 1; q <= x + 1; q++)
			{
				if (p >= 1 && p <= 9 && q >= 1 && q <= 9 && (mine[p][q] == '0' || mine[p][q] == '2'))
				{
					sum++;
				}


			}
		}
		if (count == sum)
		{
			for (p = x - 1; p <= x + 1; p++)
			{
				for (q = y - 1; q <= x + 1; q++)
				{
					if (p >= 1 && p <= 9 && q >= 1 && q <= 9)
					{
						show[p][q] = ' ';
					}
				}
			}
			for (p = x - 1; p <= x + 1; p++)
			{
				for (q = y - 1; q <= x + 1; q++)
				{
					if (p >= 1 && p <= 9 && q >= 1 && q <= 9)
					{
						UnfoldShow(mine, show, p, q);
					}
				}
			}

		}




		
	}









	




}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int a = 0;
	int jug = 0;
		
	while (jug != 1)
	{
		printf("\n");
		int win = 0;
			printf("please enter your coordinate \n");
			scanf("%d %d", &x,&y);
			printf("\n");

			if (x >= 1 && x <= row && y >= 1 && y <= col)
			{
				if (show[x][y] != '*' && show[x][y] != '#')
				{
					printf("please enter the right one\n");
				}
				else
				{
					if (mine[x][y] == '1')
					{
						printf("game over\n");
						printf("the coordinate of mine is (%d,%d)\n", x, y);
						
						DisplayBoard(mine, ROW, COL);
						jug = 1;
						break;
					}
					else
					{
						int count = 0;
						int p = 0;
						int q = 0;
						for (p = x - 1; p <= x + 1; p++)
						{
							for (q = y - 1; q <= y + 1; q++)
							{
								if (mine[x][y] == '1')
								{
									count++;
								}

							}
						}
						show[x][y] = count + '0';//'0' = 48 '1' = 49 ASCII 
						UnfoldShow(mine,show,x,y);
					}
					DisplayBoard(show, ROW, COL);
				}
			}
			else
			{
				printf("please enter a right coordinate\n");
			}
			for (x = 1; x <= row; x++)
			{
				for (y = 1; y <= col; y++)
				{
					if (show[x][y] == '#' && mine[x][y] == '1')
					{
						win++;
					}
				}

			}
			if (win == 10)
			{
				printf("congratulations ; you win \n");
				DisplayBoard(mine, ROW, COL);
				jug = 1;
				break;
			}
	}

}
