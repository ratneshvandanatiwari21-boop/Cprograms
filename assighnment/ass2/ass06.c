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
        printf("%d is a Leap Year \n",year);
    else
        printf("%d is not a Leap Year \n",year);
    
    ((year % 400 == 0) ||(year % 4 == 0 && year % 100 != 0))? printf("Leap Year") : printf("Not a Leap Year");
    return 0;
}
