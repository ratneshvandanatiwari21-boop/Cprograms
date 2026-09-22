//while loop
#include<stdio.h>
int main(){
    int num,sum,digit;
    printf("Enter the Number: ");
    scanf("%d",&num);
    sum=0;
    while (num>0)
    {
        digit=num%10;
        sum+=digit;
        num/=10;
    }
    printf("the sum of the digits is %d",sum);
    return 1;
    
}