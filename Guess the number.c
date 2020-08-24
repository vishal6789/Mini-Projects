/*  Author : Vishal Rathi
    Purpose : Guess the correct number between 0 to 20
    Date : 3/7/2020
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{   //Declaring Required variables
    unsigned int random, guess_number;
    unsigned int attempt=5;

    // Creating a Random Variable
    time_t t;
    t = time(NULL); // t contains no. of second since January 1, 1970
    random = t % 21;

    while(attempt>0)
    {   //taking the  no. guess by the user
        printf("Enter the number you Guessed : ");
        scanf("%u",&guess_number);

        if(guess_number>=0&&guess_number<=20)
        {
            if(guess_number > random)
             {
                 printf("%u is greater than my number\n",guess_number);
             }
            else if(guess_number < random)
            {
                printf("%u is less than my number\n",guess_number);
            }
            else
            {
                printf("Congratulations! You Won\n");
                break;
            }
        }
        else
        {
            printf("Please Enter a number between 0 and 20\n");
            continue;
        }
        attempt--;
    }

   if(attempt==0)
        printf("Sorry! You loss the game");

    return 0;

}
