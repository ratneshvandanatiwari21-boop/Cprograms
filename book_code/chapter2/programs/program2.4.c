#include<stdio.h>
int main(){
    int a=3,b=6,c=9;
    int d=a<b&&b<c;
    int e=a<b||b<c;
    int f=!(a>b);
    printf("%d,%d,%d",d,e,f);

    return 0;

}