#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void game()
{
	
	char ret = 0;
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisplayBoard(board,ROW,COL);
	
	while (1)
	{
		PlayerMove(board,ROW,COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//player*|computer#|draw D|continur C|
		DisplayBoard(board, ROW, COL);
		ComputerMove(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
	}
	if (ret == '*')
	{
		printf("-------------congratulations!----------------\n");
		printf("-------------the player wins-----------------\n");
	}
	else if (ret == '#')
	{
		printf("-------------congratulations!----------------\n");
		printf("-------------the computer wins---------------\n");
	}
	else
		printf("draw\n");
	DisplayBoard(board, ROW, COL);
}


void menu()
{
	printf("******************************\n");
	printf("*******     1.play     *******\n");
	printf("*******     0.exst     *******\n");
	printf("******************************\n");
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("please choose:>");
	
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("mitsuko embarks\n");
			game();
			break;
		case 0:
			printf("mitsuko ends\n");
			break;
		default:
			printf("please choose the right answer\n");
			break;
		}
	} 
	while (input);


	return 0;
}