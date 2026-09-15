/*Write a C program to accept an integer from the user and display the same value in different formats.
The program should display the given number as:
Character
Decimal
Octal
Hexadecimal
Use the appropriate format specifiers to display the number in each format.*/

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    printf("Charecter: %c\n",num);
    printf("Decimal: %d\n",num);
    printf("Octal: %o\n",num);
    printf("Hexadecimal: %x",num);

    return 0;

}