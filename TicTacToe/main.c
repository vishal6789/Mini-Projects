/*  Authour : Vishal Rathi
    Date : 11/07/2020
    Purpose : Tic Tac Toe Game
*/

#include <stdio.h>
#include <stdlib.h>
#include "tic-tac-toe.h"

int main()
{
    char a[10];
    //Declaring variables
    int i,temp,input, player;
    //Assigning and declaring the variables
    int win=0,count=0;

    // Assigning values to the cordinates
    for (i = 0; i < 9; i++) {
    temp = i + 49;
    a[i] = (char)temp;
	}

	drawBoard(a);

	while(count<9)
    {
        player = (count%2)+1;
        printf("\n Player %d, Its your turn :",player);
        scanf("%d",&input);
        markBoard((input-1),player,a);
        drawBoard(a);

        //checking for win
        win=checkForWin(a);
        if(win==1)
        {
            printf("Congrats ! Player %d Wins :)",player);
            break;
        }
        count++;
    }

	if(win==0)
    {
        printf("Match Tie...");
    }
    return 0;
}
