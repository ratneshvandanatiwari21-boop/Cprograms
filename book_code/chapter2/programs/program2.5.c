#include<stdio.h>
int main(){
    short a=12,b=5;
    short c=a&b;
    short d=a|b;
    short e=a^b;
    short f=~a;
    short g=b<<2;
    short h=b>>2;
    printf("%d,%d,%d,%d,%d,%d",c,d,e,f,g,h);
    return 0;
}