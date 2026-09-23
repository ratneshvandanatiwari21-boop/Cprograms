//Write a C program that uses a recursive function to find the sum of all even digits present in a given integer.
#include<stdio.h>
int sum(int num){
    if (num == 0)
        return 0;
    int digit = num % 10;
    if (digit % 2 == 0)
        return digit+sum(num/10);
    else
        return sum(num/10);
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Sum of even digits = %d",sum(n));
}