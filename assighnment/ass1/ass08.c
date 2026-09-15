/*Write a C program to accept a 4-digit Integer from the user and perform the following operations:
・ Display the face value of each digit.
Display the place value of each digit.
Display the given number in reverse order*/

#include <stdio.h>
int main(){
    int num;
    printf("Enter the 4 digit number: ");
    scanf("%d",&num);
    int res=num/1000;
    int res1=num%1000;
    int res2=res1/100;
    int res3=res1%100;
    int res4=res3/10;
    int res5=res3%10;
    int res6=res5/1;

    printf("Face value: %d %d %d %d\n",res,res2,res4,res6);
    printf("Place value: %d000+%d00+%d0+%d\n",res,res2,res4,res6);
    printf("Face value: %d%d%d%d",res6,res4,res2,res);

    return 0;
    
}