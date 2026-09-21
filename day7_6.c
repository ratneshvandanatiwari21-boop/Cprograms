// Function: with parameters without rerurn type
// return_type function_name(input parameters)
#include<stdio.h>
void addition(int,int);//decleration

int main(){
    addition(20,30);// actual arguments
    addition(30,40);// function call
    addition(80,40);
}


void addition(int num1, int num2){  // formal arguments
    int result = num1+num2;//defination
    printf("result = %d\n",result);

}