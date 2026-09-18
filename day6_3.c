// Enum
// user defined datatype
#include<stdio.h>
enum year{jan=1,feb,march,apr,may,june,july,aug,sept,oct,nov,dec};
int main(){
    enum year month;
    month = feb;
    printf("month = %d\n",month);
    
    printf("Enter the Month: ");
    scanf("%d",&month);
    switch (month)
    {
    case jan : case march: case may: case july: case aug: case oct: case dec:
        printf("This Month have 31 days");
        break;
    case apr : case june: case sept: case nov:
        printf("This Month have 30 days");
        break;
    case feb:
        printf("This Month have 28/29 days");
        break;    
    default:
        break;
    }

}