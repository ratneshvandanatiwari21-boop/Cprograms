#include <stdio.h>
int main(){
    float p,r,t;
    printf("Enter the Principal Amount,Rate of Intrest,Time Period:\n ");
    scanf("%f%f%f",&p,&r,&t);
    float si=(float)p*r*t/100;
    printf("Simple Intrest = %.2f",si);
    return 0;
}