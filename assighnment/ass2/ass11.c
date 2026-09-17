/*Create a menu-driven calculator that supports the following operations:
Addition
Subtraction
Multiplication
Division
Display an error message when division by zero is attempted.
Input Format
Choice
First Number
Second Number
*/

#include<stdio.h>
int main(){
    int choice, num1 , num2;

    printf("1 Addition\n2 subtraction\n3 multiplication\n4 division\n");
    printf("Enter the choice\n");
    scanf("%d",&choice);

    printf("Enter the values of num1 , num2\n");
    scanf("%d%d",&num1,&num2);

    switch (choice)
    {
    case 1:
        printf("Addition= %d",num1+num2);
        break;
    case 2:
        printf("Substraction= %d",num1-num2);
        break;
    case 3:
        printf("Multiplication= %d",num1*num2);
        break;
    case 4:
        printf("Division= %d",num1/num2);
        break;
    default:
        break;
    }
}
