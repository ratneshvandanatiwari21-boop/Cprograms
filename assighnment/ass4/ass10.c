//Write a C program that uses a function to calculate the quotient and remainder when one integer is divided by another

#include<stdio.h>
void calculate(int num1,int num2,int *quotient,int * remainder){
    *quotient=num1>num2;
    *remainder=num1%num2;

}
int main(){
    int n1,n2,quotient,remainder;
    printf("Enter the Dividend: ");
    scanf("%d",&n1);
    printf("Enter the Divisor: ");
    scanf("%d",&n2);

    if (n2>0)
    {
        calculate(n1,n2,&quotient,&remainder);
        printf("Quotient of %d , %d is %d\n",n1,n2,quotient);
        printf("Remainder of %d , %d is %d\n",n1,n2,remainder);
    }
    else
        printf("Zero Division Error...!");

}