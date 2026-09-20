#include<stdio.h>
int main(){
    float ts,bs=2500,com=0,gs;
    printf("Enter total sales: ");
    scanf("%f",&ts);
    if(ts>5000)
    {
        com = 300;
    }
    gs=bs+com;
    printf("Commission = %.2f\nGross Salary = %.2f",com,gs);
}