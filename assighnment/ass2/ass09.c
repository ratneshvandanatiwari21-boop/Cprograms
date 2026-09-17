/*Create an enum named WeekDay to represent the days of the week.*/
#include<stdio.h>
int main(){
    int num;
    printf("1. Monday\n2. Tuesday\n3. Wednesday\n4. Thursday\n5. Friday\n6. Saturday\n7. Sunday\nEnter the number/choice: ");
    scanf("%d",&num);
    switch (num)
    {
    case 1:
        printf("Monday\nWorking Day");
        break;
    case 2:
        printf("Tuesday\nWorking Day");
        break;
    case 3:
        printf("Wednesday\nWorking Day");
        break;
    case 4:
        printf("Thursday\nWorking Day");
        break;
    case 5:
        printf("Friday\nWorking Day");
        break;
    case 6:
        printf("Saturday\nWorking Day");
        break;
    case 7:
        printf("Sunday\nWorking Day");
        break;
    default:
        printf("Invaild Number/Choice");
        break;
    }
    return 0;
}