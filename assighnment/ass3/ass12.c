//Write a C program to calculate the mean (average) of a set of numbers.
#include<stdio.h>
int main(){
    int n,num;
    float sum;
    printf("Enter the num: ");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        printf("Enter the numbers: ");
        scanf("%d",&num);
        sum+=num;
    }
    float result=(float)sum/n;
    printf("Mean of The Numbers = %.2f",result);
    
}
