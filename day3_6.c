// Operators: Assignment(binary), comma(special type of operator)
//comma with bracket

#include <stdio.h>
int main(){
    int num1;
    num1 = 20,30,40;
    printf("num1=%d\n",num1);
    int num2 = (50,60,70);
    printf("num2=%d\n",num2);
}