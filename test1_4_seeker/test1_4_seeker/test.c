
#include "game.h"
void menu()
{
	printf("------------------------------------\n");
	printf("--------------1.play----------------\n");
	printf("--------------0.exit----------------\n");
	printf("------------------------------------\n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	DisplayBoard(show, ROW, COL);

	SetMine(mine, ROW, COL);
	FindMine(mine, show, ROW, COL);





}
int main()
{
	srand((unsigned int)time(NULL));
	int cho = 0;
	do
	{
		printf("please choose\n");
		menu();
		scanf("%d", &cho);
		switch (cho)
		{
		case 1:
			printf("enter the game\n");
			game();
			break;
		case 0:
			printf("exit\n");
			break;
		default:
			printf("please enter again\n");
			break;
		}
	} while (cho);
	return 0;
}