// Logical Operators:   && , || (binary operators),  !(unary operator)
// && - returns true if both conditions are true ,if 1st condition is false it does not check second condition
// || - it returnns true if either of the one condition is true , if 1st condtion is true it does not check second condtion
 
#include<stdio.h>
int main(){
    int num1=0,num2=40;
    int res=num1&&num2;
    printf("Result=%d\n",res);
    res=num1||num2;
    printf("Result=%d\n",res);
    res=num1!=num2;
    printf("Result=%d\n",res);
    res=num1=!num2;
    printf("Result=%d\n",res);

    return 0;
}