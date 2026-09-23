// changing the state of the variable using pointer,
#include<stdio.h>
int main(){
    int num1=25;
    int *ptr =&num1;

    printf("*ptr = %d \n",*ptr);
    *ptr = 50;
    printf("*ptr = %d\n",*ptr);
    printf("num1=%d\n",num1);

}