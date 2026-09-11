#include<stdio.h>
int main(){
    int num1;        //decleration
    num1=25;        // assignment
    int num2=60;    //Initialization
    char ch='A';
    float fvar=2.1;
    double dvar=9.12345;

    printf("num1=%d\n",num1);
    printf("num2=%d\n",num2);
    printf("num2=%c\n",ch);
    printf("num2=%f\n",fvar);
    printf("num2=%0.2f\n",fvar);
    printf("num2=%lf\n",dvar);
    printf("num2=%0.3lf\n",dvar);

    return 0;
}