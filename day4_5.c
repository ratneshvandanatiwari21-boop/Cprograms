// Unary operators with comma and bracket
#include<stdio.h>
int main(){
    int num1=20,num2=50;
    int res;
    res=num1++ , ++num1, num1++;
    printf("Result= %d , num1= %d\n",res,num1);

    res=(++num2,num2++,++num2,num2++);
    printf("Result= %d , num2= %d",res,num2);

    return 0;
}