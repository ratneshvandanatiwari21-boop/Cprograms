//CheckWhether a Number is a Perfect Number
#include <stdio.h>
int main(){
    int num,sum;
    printf("Enter the number: ");
    scanf("%d",&num);
    sum=0;
    for ( int i = 1; i < num; i++)
    {
        if (num%i==0)
        {
            sum+=i;
        }    
    }
    if (sum==num)
    {
        printf("%d is a perfect number",num);
    }
    else
    {
        printf("%d is not a perfect number",num);
    }
}