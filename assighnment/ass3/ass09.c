//Display Even Values from a Multiplication Table
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    for (int i = 1; i <= 10; i++)
    {
        if ((num*i)%2==0)
        {
            printf("%d\n",num*i);
        }  
    }   
}