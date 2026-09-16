// Unary Operators(++ , --) with logical Operator(&& || !)
#include<stdio.h>
int main(){
    int num1=0, num2=25;
    int res=num1++ && num2;
    printf("Num1= %d  Num2= %d  Result= %d\n",num1,num2,res);
    res=num1++ || num2;
    printf("Num1= %d  Num2= %d  Result= %d\n",num1,num2,res);

    int num3=50;
    res=num1++ || num2++ && num3;
    printf("Num1= %d  Num2= %d  Num3= %d  Result= %d\n",num1,num2,num3,res);

    num1 = 0;
    res = num1++ || num2++ && num3++;
    printf("Num1= %d  Num2= %d  Num3= %d  Result= %d",num1,num2,num3,res);

    return 0;
    
}