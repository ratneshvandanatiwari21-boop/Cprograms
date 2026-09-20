//Write a C program that repeatedly prompts the user to enter a number until a positive number 
//(greater than zero) is provide

#include<stdio.h>
int main(){
    int num;
    do
    {
        printf("Enter the Number: ");
        scanf("%d",&num);
        if (num<=0)
            printf("Invalid input. Please enter a positive number.\n");
        else 
            printf("You entered a positive number: %d\n", num);
    } while (num <= 0);
}