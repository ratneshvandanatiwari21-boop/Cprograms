//Write a C program to calculate the digital root of a given number.
#include<stdio.h>
int main(){
    long num;
    printf("Enter the Number: ");
    scanf("%ld",&num);
    int sum,digit;
    while (num >= 10) {
        sum=0;
        while (num > 0) {
            digit = num % 10;
            sum = sum + digit;
            num = num / 10;
        }
        num = sum;
    }
    printf("Digital Root = %ld", num);
    return 0;

}