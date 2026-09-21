//Write a C program that uses a function to calculate the Simple Interest

#include<stdio.h>
float si(float,float,float);

int main(){
    float n1,n2,n3;
    printf("Enter the Principal Amount: ");
    scanf("%f",&n1);
    printf("Enter the Rate of intrest: ");
    scanf("%f",&n2);
    printf("Enter the Time: ");
    scanf("%f",&n3);

    float result=si(n1,n2,n3);
    printf("Simple Intrest= Rs %.2f",result);

}
float si(float p,float r,float t){
    float result=p*r*t/100;
    return  result;
}