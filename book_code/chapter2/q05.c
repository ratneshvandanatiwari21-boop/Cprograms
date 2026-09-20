#include <stdio.h>
int main(){
    int a = -10, b=3,c=0,d;
    d=a++||++b&&c++;
    printf("%d,%d,%d,%d",a,b,c,d);

    a=-10,b=3,c=0;
    d=c++&&++b||a++;
    printf("%d,%d,%d,%d",a,b,c,d);

    return 0;
}