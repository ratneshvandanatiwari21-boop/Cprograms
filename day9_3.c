//size of pointer
#include<stdio.h>
int main(){
    int num1=25;
    int *ptr=&num1;

    char ch = 'A';
    char *c_ptr = &ch;

    float fvar=1.2f;
    float *f_ptr=&fvar;

    double dvar = 3.6;
    double *d_ptr=&dvar;

    printf("Size of ptr = %u\n",sizeof(ptr));
    printf("Size of c_ptr = %u\n",sizeof(c_ptr));
    printf("Size of f_ptr = %u\n",sizeof(f_ptr));
    printf("Size of d_ptr = %u\n",sizeof(d_ptr));
}
