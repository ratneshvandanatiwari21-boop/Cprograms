// sum of digits
#include<stdio.h>
int main(){
    int num;
    printf("Enter the Number: ");
    scanf("%d",&num);
    int sum=0;

    while (num>0)
    {
        int digit = num%10;
        sum += digit;
        num/=10;
    }
    printf("Sum of digit = %d",sum);
    return 0;
}