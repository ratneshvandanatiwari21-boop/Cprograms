/*Write a C program to convert a given number of seconds into hours, minutes, and seconds.
The program should:
Accept the total number of seconds from the user.
Calculate the equivalent number of hours, minutes, and remaining seconds.
Display the converted time in a clear and readable format.
*/
#include<stdio.h>
int main(){
    int seconds;
    printf("Enter the seconds: ");
    scanf("%d",&seconds);

    int res=seconds/3600;
    int res2=(seconds%3600)/60;
    int res3=(seconds%3600)%60;

    printf("%d Hours %d Minutes %d seconds",res,res2,res3);

    return 0;

}