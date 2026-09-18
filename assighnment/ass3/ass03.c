//CheckWhether a Number is a Power of 2 (Using Loop)
#include<stdio.h>
int main(){
    int num,n;
    printf("Enter the Number: ");
    scanf("%d",&num);
    if (num==1 || num==0 || num%2!=0 )
    {
        printf("Not a power of 2");
    }
    while (num % 2 == 0) {
        num = num / 2;
    }

    if (num == 1) {
        printf("Power of 2");
    }
    else {
        printf("Not a power of 2");
    }

    
}