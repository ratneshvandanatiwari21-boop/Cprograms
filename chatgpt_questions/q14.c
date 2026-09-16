/*Accept a 4-digit integer and calculate the product of all its digits.
Example: 1234 → 1 × 2 × 3 × 4 = 24*/

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

    int multiply=res*res2*res3*res4;

    printf("The product of all its digit (%d X %d X %d X %d) = %d",res,res2,res3,res4,multiply);

    return 0;
}