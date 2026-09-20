//WAP to accept a 4 digit number and display sum of all digits
#include<stdio.h>
int main(){
    int num;
    printf("Enter the 4 digit number: ");
    scanf("%d",&num);
    int res=num/1000;
    num=num%1000;
    int res1=num/100;
    num=num%100;
    int res2=num/10;
    num=num%10;

    printf("Sum of its digitd = %d",res+res1+res2+num);
}