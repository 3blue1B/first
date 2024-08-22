#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}

	}
}
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//printf("|---|---|---|\n");
		//printf("| %c | %c | %c | \n", board[i][0], board[i][1], board[i][2]);
		//if(i==row-1)
			//printf("|---|---|---|\n");
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("player:>\n");
		printf("please enter cordinate:>");
		scanf("%d %d", &x, &y);

		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("the cordinate is occupied please try again\n");
			}
		}
		else
		{
			printf("please enter once again\n");
		}
	}

}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	//random 
	printf("computer plays\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		int count = 0;

		for (j = 0; j < col; j++)
		{
			if (board[i][j]== '*')
			{
				count++;
			}
			else if (board[i][j] == '#')
			{
				count--;
			}
		}
		if (count == col)
		{
			return '*';
		}
		else if (count == -col)
		{
			return '#';
		}
	}
	for (j = 0; j < col; j++)
	{
		int count = 0;

		for (i = 0; i < row; i++)
		{
			if (board[i][j] == '*')
			{
				count++;
			}
			else if (board[i][j] == '#')
			{
				count--;
			}
		}
		if (count == col)
		{
			return '*';
		}
		else if (count == -col)
		{
			return '#';
		}
	}
	for (j = 0; j < 2; j++)
	{
		int count = 0;
		for (i = 0; i < row; i++)
		{
			if (board[i][i] == '*')
			{
				count++;
			}
			else if (board[i][i] == '#')
			{
				count--;
			}
		}
		if (count == col)
		{
			return '*';
		}
		else if (count == -col)
		{
			return '#';
		}
	}
	for (j = 0; j < 2; j++)
	{
		int count = 0;
		for (i = 0; i < row; i++)
		{
			if (board[row-1-i][i] == '*')
			{
				count++;
			}
			else if (board[row-1-i][i] == '#')
			{
				count--;
			}
		}
		if (count == col)
		{
			return '*';
		}
		else if (count == -col)
		{
			return '#';
		}
	}
	{
		int count = 0;
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
			{
				if (board[i][j] == ' ')
				{
					count++;
				}
			}
		}
		if (count == 0)
		{
			return 'D';
		}
	}
	return 'C';
}
























