/*Size of
Operators*/
#include<stdio.h>
int main(){
    int num=60;
    char ch='A';
    float fvar=2.1;
    double dvar=9.12345;

    printf("size of num=%u\n",sizeof(num));
    printf("size of 25=%u\n",sizeof(25));
    printf("size of ch=%u\n",sizeof(ch));
    printf("size of ch=%u\n",sizeof('A'));
    printf("size of fvar=%u\n",sizeof(fvar));
    printf("size of 2.1=%u\n",sizeof(2.1f));
    printf("size of dvar=%u\n",sizeof(dvar));
    printf("size of 9.12345=%u\n",sizeof(9.12345));
    printf("size of num+dvar=%u\n",sizeof(num + dvar));

    return 0;
}
