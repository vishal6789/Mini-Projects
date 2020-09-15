#include <stdio.h>
#include <stdlib.h>

// Creating function to draw the tic-tac-toe table
void drawBoard(char a[])
{
    system("clear");
    printf("\t Tic - Tac - Toe \n\n ");
    printf("Player 1 - 'x' || Player 2 - 'O' \n\n");
    printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", a[0], a[1], a[2]);
	printf("     |     |     \n");
	printf("-----|-----|-----\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", a[3], a[4], a[5]);
	printf("     |     |     \n");
	printf("-----|-----|-----\n");
	printf("     |     |     \n");
	printf("  %c  |  %c  |  %c  \n", a[6], a[7], a[8]);
	printf("     |     |     \n");
}

//Creating function to mark the respective symbol ( either X or O)
void markBoard(int index, int player_number,char a[])
{
    if(index<0 || index>9 || a[index]=='X' || a[index]=='O' )
    {
        printf("Invalid choice, Please Enter agian :");
        scanf("%d",&index);
        markBoard((index-1),player_number,a);
    }
    else if(player_number==1)
        a[index]='X';
    else if(player_number==2)
        a[index]='O';
}

//Creating function to check weather player has won or its a tie
int checkForWin(char a[])
{   int Win_check = 0;
    for (int i = 0; i < 9; i+=3)
    {
    if (a[i] == a[i + 1] && a[i + 1] == a[i + 2])
        Win_check = 1;
    }
    for(int i=0;i<3;i++)
    {
    if (a[i] == a[i + 3] && a[i + 3] == a[i + 6])
        Win_check = 1;
    }
    if (a[0] == a[4] && a[4] == a[8])
        Win_check = 1;
    if (a[2] == a[4] && a[4] == a[6])
        Win_check = 1;
    return Win_check;
}