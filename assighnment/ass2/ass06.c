/*Write a program to determine whether the given year is a leap year.
A leap year is divisible by 4 and 400, but not by 100.
Implement the solution using:
If-Else
Logical Operators
Conditional (Ternary) Operator
*/

#include<stdio.h>
int main(){
    int year;
    printf("Enter the Year: ");
    scanf("%d",&year);

    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        printf("%d is a Leap Year ",year);
    else
        printf("%d is not a Leap Year ",year);

    return 0;
}
