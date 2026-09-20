//logical not operator:
#include<stdio.h>
int main(){
    int a=4,b=9;
    if(a<b)
        printf("One\n");
    if(!(a<b))
        printf("two\n");
    else
        printf("Three\n");
    printf("b=%d\n!b=%d\n!!b=%d\n",b,!b,!!b);

    return 0;
}