/*Write a C program to simulate a simple Housie (Tambola) game. In this game, a player has a ticket number,
and numbers are announced one by one. The program should repeatedly accept announced numbers and
check whether they match the user's ticket number.*/

#include<stdio.h>
int main(){
    int t_num,h_num,count=0,num;
    printf("Enter the Ticket number: ");
    scanf("%d",&t_num);
    do
    {
        printf("Enter your House number: ");
        scanf("%d",&h_num);
        if (t_num!=h_num)
        {
            printf("Number Not Matched.\n");
            count++;
            printf("Do you want to continue? (1 = Yes, 0 = No): ");
            scanf("%d", &num);

        }
        else{
            printf("Number Matched.\n");
            count++;
            break;
        }
          
    } while (num==1);
    printf("Total announced numbers checked - %d",count);

}