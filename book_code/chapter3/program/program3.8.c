//Switch statement
#include<stdio.h>
int main(){
    int empid,dept_no;
    printf("Enter the Employee ID and Department number:\n");
    scanf("%d%d",&empid ,&dept_no);
    printf("Employee with Employee Id %d works in ",empid);
    switch (dept_no)
    {
    case 10:
        printf("Marketing");
        break;
    case 20:
        printf("Sales");
        break;
    case 30:
        printf("Production");
        break;
    case 40:
        printf("Accounts");
        break;
    default:
        printf("Unknown");
        break;
    }
    printf(" department.");
    return 0;
}