#include<stdio.h>
int main(){
    int a=(1,2,3);
    int b =(++a,++a,++a);
    int c =(b++,b++,b++);
    printf("%d %d %d",a,b,c);
    return 0;
}