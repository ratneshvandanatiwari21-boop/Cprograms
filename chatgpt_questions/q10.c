/*Accept a 3-digit integer and display the hundreds, tens, and units digits separately.
Example: 583 → 5 8 3.*/

#include<stdio.h>
int main(){
    int num;
    printf("Enter 3 digit number: ");
    scanf("%d",&num);

    int res=num/100;
    int res1=num%100;
    int res2=res1/10;
    int res3=res1%10;

    printf("Hundreds : %d\n",res);
    printf("Tens : %d\n",res2);
    printf("Ones : %d",res3);

    return 0;


}