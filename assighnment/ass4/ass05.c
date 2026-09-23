//decimal to octal;
#include<stdio.h>
void octal(int num){
    if (num==0)
        return;
    octal(num/8);
    printf("%d",num%8);

}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if (n == 0)
        printf("0");
    else
        octal(n);
}