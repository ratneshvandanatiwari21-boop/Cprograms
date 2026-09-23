//Assigning adress
#include<stdio.h>
int main(){
    int num1=500;
    char *ptr = &num1;

    printf("Num1= %d\n",num1);
    printf("*ptr = %d\n",*ptr);
}