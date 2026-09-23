//// Pass by value
#include<stdio.h>
void swap(int num1,int num2){
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
}
int main(){
    int n1=25,n2=50;
    printf("Before swapping data : n1 = %d n2 = %d\n",n1,n2);
    swap(n1,n2);
    printf("After swapping data : n1 = %d n2 = %d\n",n1,n2);

}