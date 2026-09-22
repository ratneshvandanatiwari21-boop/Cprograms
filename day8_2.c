// Global variable , Extern(Keyword)
// default value = 0
// storage = Data section
// scope = throughout the program
// life = throughout the program
#include<stdio.h>
int num1;
extern int num2;
int main(){
    int num1 = 10;
    printf("num1 in main = %d\n",num1); 
    fun();
    printf("num2 = %d\n",num2);
}
num2=30;
void fun(){
    num1=num1+2;
    printf("num1 in fun is %d\n",num1);
}