// Static variable
// default value = 0
// storage = data section
// scope = program / block
// life = program / block
#include<stdio.h>
int main(){
    fun();
    fun();
    fun();
    fun2();
    fun2();
    fun2();
}
void fun(){
    int num1 = 10;
    printf("num1=%d\n",num1);
    num1++;
}
void fun2(){
    static int num1=10;
    printf("Num1 = %d\n",num1);
    num1++;
}
