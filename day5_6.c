// Nested Ternery operator
// condition? exp1 1(true): exp2(false)
#include<stdio.h>
int main(){
    int num1 = 60;
    int num2 = 70;
    int num3 = 80;

    int max= num1>num2? num1>num3? printf("%d is greater",num1): printf("%d is greater",num3) : num2>num3? printf("%d is grater",num2):printf("%d is greater",num3);
    return 0;
}