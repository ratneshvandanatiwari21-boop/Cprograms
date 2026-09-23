// Pass by value
#include<stdio.h>
void swap(int *ptr1, int *ptr2){
    int temp ;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

}
int main(){
    int n1 = 25;
    int n2 = 50;
    printf("Before swapping data : n1 = %d n2 = %d\n",n1,n2);
    swap(&n1,&n2);
    printf("After swapping data : n1 = %d n2 = %d\n",n1,n2);

}
