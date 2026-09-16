/*Accept a 3-digit integer and display its reverse using / and %*/
#include<stdio.h>
int main(){
    int num;
    printf("Enter 3 digit number: ");
    scanf("%d",&num);

    int res=num/100;
    num=num%100;
    int res1=num/10;
    num=num%10;
    
    printf("The reverse of the number :%d%d%d",num,res1,res);

    return 0;

}