// Terneary operator/ conditional operator
// condition ? exp1 true: exp2 false

#include<stdio.h>
int main(){
    int num1=20 ,num2=30;
    int max= num1 > num2 ? printf("%d is greater the %d",num1,num2): printf("%d is greater then %d",num2,num1);
    return 0;

}