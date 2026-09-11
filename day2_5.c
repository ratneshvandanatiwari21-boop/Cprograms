// printf and scanf return type
#include<stdio.h>
int main(){
    int count=printf("Hello!\n");
    printf("count=%d\n",count);
    int num1=25;
    count=printf("num1=%d\n",num1);
    printf("count=%d\n",count);

    int num4,num2,num3;
    printf("enter the num4 num2 num3\n");
    count=scanf("%d%d%d",&num4,&num2,&num3);
    printf("count=%d\n",count);

    return 0;


}