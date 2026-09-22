// //storage classes: auto, register variables
// Local 
// Default value = Garbage
// scope = block
// life = block
// storage = stack

#include<stdio.h>
void fun(){
    
}
int main(){
    int num1 = 10;
    fun();
    register int num2;
    printf("num1 = %d\n",num1);
}
