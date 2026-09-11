// use of %*c%c
#include<stdio.h>
int main(){
    int num1 ,num2 ,num3;
    char ch;

    printf("Enter the num1 ,num2 ,num3\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    
    printf("Enter the ch\n");
    scanf("%*c%c",&ch);
    
    printf("num1= %d ,num2= %d ,num3= %d\n",num1,num2,num3);
    printf("ch=%d ch=%c\n",ch,ch);
    return 0;
}