#include<stdio.h>
int main(){
    int num1;
    printf("Enter the Number: ");
    scanf("%d",&num1);
    
    if (num1%2==0)
        printf("%d is Even\n",num1);
    else
        printf("%d is Odd\n",num1);
    
    num1%2==0? printf("%d is Even\n",num1):printf("%d is Odd\n",num1);

}