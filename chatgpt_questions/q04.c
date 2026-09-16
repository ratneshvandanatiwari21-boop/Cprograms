/*Accept two integers and swap their values using a temporary variable.
Example: 10 20 → 20 10*/

#include<stdio.h>
int main(){
    int a , b , temp;
    printf("Enter the two Number: \n");
    scanf("%d%d",&a,&b);

    temp=a;
    a=b;
    b=temp;

    printf("After Swapping: %d %d\n",a,b);

    return 0;

}