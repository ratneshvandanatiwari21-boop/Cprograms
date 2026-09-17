/*Write a program to accept a single Roman numeral character and display its decimal value using a switch
statement.
Roman Value
I 1
V 5
X 10
L 50
C 100
D 500
M 1000
If the entered symbol is invalid, display "Invalid Roman Symbol".*/

#include<stdio.h>
int main(){
    char choice;
    printf("Enter the Roman Value: ");
    scanf(" %c",&choice);
     
    switch (choice)
    {
    case 'I':
        printf("1");
        break;
    case 'V':
        printf("5");
        break;
    case 'X':
        printf("10");
        break;
    case 'L':
        printf("50");
        break;
    case 'C':
        printf("100");
        break;
    case 'D':
        printf("500");
        break;
    case 'M':
        printf("1000");
        break;
    default:
        printf("Invalid Roman Symbol");
        break;
    }
    return 0;
}