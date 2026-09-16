/*Accept total minutes and convert them into hours and remaining minutes.
Example: 135 → 2 hours 15 minutes*/

#include<stdio.h>
int main(){
    int num;
    printf("Enter the minutes: ");
    scanf("%d",&num);
    int res=num/60;
    int res1=num%60;
    printf("%d minutes is equal to %d hour %d minutes.",num,res,res1);
    
    return 0;

}