#include<stdio.h>
int main(){
    int a,b ,max;
    printf("Enter the time In seconds: \n");
    scanf("%d%d",&a,&b);
    
    max=a>b?a:b;

    while (max)
    {
        if (max%b==0 && max%a==0)
        {
        printf("Synchronization Time = %d seconds",max);
        break;
        }
        max++;
    }
    return 0;
    
}