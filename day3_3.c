// Types of errors : Compiler, Linker, Runtime, Logical Errors
#include<stdio.h>
int main(){
    int num1=100; //compiler error
    printf("num1=%d\n",num1);//linker error
    int num2=10/0;//runtime error
    printf("num2=%d\n",num2);
    int sum=10-1;//logical error

    return 0;
}