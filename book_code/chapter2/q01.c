#include <stdio.h>
int main(){
    char ch=65;
    int x=9;
    printf("%d,%d\n",sizeof(ch),sizeof('A'));
    printf("%d,%d\n",sizeof(65),sizeof(++x));
    printf("%d\n",x);
    return 0;
}