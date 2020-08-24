/*  Name : Vishal Rathi
    Purpose : To arrange given strings in alphabeticala Order
    Date : 15/07/2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Declaring array of string (or array of character array)
char list[25][25];

//Declaring the swap and sort function
void swap(int);
void sort(int);

int main()
{
    int No_of_string;

    //Taking input no. of strings by the user
    printf("Enter number of Strings you have to enter:");
    scanf("%d",&No_of_string);

    //taking strings by the user
    for(int i=0;i<No_of_string;i++)
    {
        scanf("%s",list[i]);
    }

    //Sorting the Strings
    sort(No_of_string);

    //printing the sorted strings
    printf("The sorted strings are: \n");
    for(int i=0;i<No_of_string;i++)
    {
        printf("%s \n",list[i]);
    }

    return 0;
}

//Defining the swap Function
// It will take one argument that will be the index of first string
void swap(int index)
{
    char temp;
    for(int i=0;i<25;i++)
    {
        temp =  list[index][i];
        list[index][i] = list[index+1][i];
        list[index + 1][i] = temp;
     }
}
//Defining the sort function
// It will take one argument that is number of strings enter by the user
void sort(int number)
{
    int k=0;
    for(int i= 0;i<number;i++)
    {
        for(int j=0;j<number-i-1;j++)
        {
           k=0;
            while(list[j][k]!='\0' && list[j+1][k]!='\0')
            {
                if(list[j][k]>list[j+1][k])
                {
                    swap(j);
                    break;
                }
                else if(list[j][k]==list[j+1][k])
                    k++;
                else
                    break;
            }

        }
    }
}
