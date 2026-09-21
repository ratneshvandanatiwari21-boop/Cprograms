// function: with paramters and with return type
#include<stdio.h>
int addition(int , int , int);
int main(){
    int result = addition(500,200,450);
    printf("result = %d\n",result);
    result = addition(1300,1200,1111);
    printf("result = %d\n",result);
    return 0;
}

int addition(int num1 , int num2, int num3){
    int result = num1+num2+num3;
    return result;
}