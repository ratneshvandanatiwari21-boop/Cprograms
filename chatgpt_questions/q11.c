/*Accept a 4-digit integer and calculate the sum of its digits.*/
#include<stdio.h>
int main(){
    int num;
    printf("Enter the four digit number : ");
    scanf("%d",&num);
    int res=num/1000;
    num=num%1000;
    int res2=num/100;
    num=num%100;
    int res3=num/10;
    num=num%10;
    int res4=num/1;

    int sum=res+res2+res3+res4;

    printf("the sum of digits of the number is %d",sum);
    return 0;
}