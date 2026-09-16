// Increment and Decrement opeartor (unary operator)
// preincrement 
// postincrement
// predecrement
// postdecrement

#include<stdio.h>
int main(){
    int num1=20, num2=30;
    int res=++num1;
    printf("Result= %d num1= %d\n",res,num1);
    res=num1++;
    printf("Result= %d, num1=%d\n",res,num1);

    res=--num2;
    printf("Result= %d num2= %d\n",res,num2);
    res=num2--;
    printf("Result= %d, num2=%d\n",res,num2);
    
    return 0;
}