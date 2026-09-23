// types of Pointer;wild pointer,Null pointer,void pointer
#include<stdio.h>
int main(){
    int *ptr1;// wild
    int *ptr2=NULL;// null
    void *ptr3=NULL;//void

    int num=25;
    ptr3 = &num;

    printf("num = %d\n",num);
    printf("*ptr3 =%d\n",*(int*)ptr3);

    char ch='A';
    ptr3 =&ch;
    printf("ch = %c\n",ch);
    printf("*ptr =%c\n",*(char*)ptr3);
    printf("*ptr3 =%d\n",*(char*)ptr3);





}