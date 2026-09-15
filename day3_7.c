// Arithmatic Operators: + -  * / %
// Binary operator

#include<stdio.h>
int main(){
    int num1 = 20, num2 = 10;
    int res = num1+num2;
    printf("Result=%d\n",res);
    
    int res1 = num1-num2;
    printf("Result=%d-%d=%d\n",num1,num2,res1);
    
    int res2 = num1+num2; 
    printf("Result=%d+%d=%d\n",num1,num2,res2);
    
    int res3 = num1*num2;
    printf("Result=%dX%d=%d\n",num1,num2,res3);
    
    int res4 = num1/num2;
    printf("Result=%d/%d=%d\n",num1,num2,res4);
    
    int res5 = num1%num2;
    printf("Result=%d%%%d=%d\n",num1,num2,res5);

    
    return 0;
}