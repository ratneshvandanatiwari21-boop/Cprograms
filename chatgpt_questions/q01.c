/*Write a C program to accept temperature in Celsius and convert it into Fahrenheit.
Formula: F = (C × 9 / 5) + 32*/
#include<stdio.h>
int main(){
    double c;
    printf("Enter the the Celsius(degree): ");
    scanf("%lf",&c);
    double f=(c*9/5)+32;
    printf("%.2lf celsius is %.2lf Fahrenheit",c,f);
}