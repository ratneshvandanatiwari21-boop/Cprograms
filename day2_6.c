//sighned unsighed variables(type modifier)
#include<stdio.h>
#include<limits.h>
int main(){
    signed int num1=30;
    unsigned int num2=20;
    printf("signed int range is %d to %d\n",INT_MIN,INT_MAX);
    printf("unsigned int range is 0 to %d\n",INT_MAX);

    return 0;
}