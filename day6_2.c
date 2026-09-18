// Multiple switch cases(No.of days in a month)
// 1 3 5 7 8 10 12 = 31 days
// 4 6 9 11 = 30 days
// 2 = 29/28 days
#include <stdio.h>
int main(){
    
    int month;
    printf("Enter the Month: ");
    scanf("%d",&month);
    switch (month)
    {
    case 1:case 3:case 5:case 7:case 8:case 10: case 12:
        printf("This Month have 31 days");
        break;
    case 4:case 6:case 9:case 11:
        printf("This Month have 30 days");
        break;
    case 2:
        printf("This Month have 28/29 days");
        break;    
    default:
        break;
    }
}