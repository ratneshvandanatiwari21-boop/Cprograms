/*Write a C program to compare the results of integer addition and floating-point addition.
The program should:
Accept two floating-point numbers from the user.
Convert both numbers to integers before performing the integer addition.
Calculate the sum using the integer values.
Calculate the sum again using the original floating-point values.
Display and compare both results.*/

#include<stdio.h>
int main(){
    float num1 , num2;
    printf("Enter the Number1:");
    scanf("%f",&num1);
    printf("Enter the Number2:");
    scanf("%f",&num2);

    printf("num1 in float: %.2f\n",num1);
    printf("num2 in float: %.2f\n",num2);

    float sum =num1+num2;
    printf("Sum is:%.2f\n",sum);

    int sum1 =num1+num2;
    printf("Sum is:%d\n",sum1);

    printf("Compare both results are %.2f-%d=%.2f\n",sum,sum1,sum-sum1);


    return 0;
}