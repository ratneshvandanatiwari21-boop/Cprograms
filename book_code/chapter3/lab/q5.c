//WAP to display n terms of Fibonacci series
#include<stdio.h>
int main(){
    int n;
    printf("Enter the Number of term: ");
    scanf("%d",&n);
    int a=0 ,b= 1;

    for (int i = 0; i <=n; i++)
    {
        printf("%d ",a);
        int next = a + b;
        a = b;
        b = next;
    }
}