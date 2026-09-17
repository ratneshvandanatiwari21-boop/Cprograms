/*Write a program to accept the following employee details:
Employee ID
Department Number
Designation Code
Display the employee's department name and designation using the following reference table.
Department No. Department Name Designation Code Designation
10 Marketing    M   Manager
20 Management   S   Supervisor
30 Sales        Ο   Security Officer
40 Designing    C   Clerk
If the entered Department Number or Designation Code is invalid, display an appropriate error message.*/

#include<stdio.h>
int main(){
    int emp_id , dep_no;
    char des_code;
    
    printf("Enter the Employee ID: ");
    scanf("%d",&emp_id);
    printf("Enter the Designation Code: ");
    scanf(" %c",&des_code);
    printf("Enter the Department No: ");
    scanf("%d",&dep_no);

    switch (dep_no)
    {
    case 10:{
        if(des_code=='M')
            printf("Employee with Employee ID %d is working in ""Marketing"" department as ""Manager""",emp_id);
        else if(des_code=='S')
            printf("Employee with Employee ID %d is working in ""Marketing"" department as ""Supervisor""",emp_id);
        else if(des_code=='O')
            printf("Employee with Employee ID %d is working in ""Marketing"" department as ""Security Officer""",emp_id);
        else if(des_code=='C')
            printf("Employee with Employee ID %d is working in ""Marketing"" department as ""Clerk""",emp_id);        
        else 
            printf("The entered Employee ID or Department Number or Designation Code is invalid");        
        break;
    }
    case 20:{
        if(des_code=='M')
            printf("Employee with Employee ID %d is working in ""Management"" department as ""Manager""",emp_id);
        else if(des_code=='S')
            printf("Employee with Employee ID %d is working in ""Management"" department as ""Supervisor""",emp_id);
        else if(des_code=='O')
            printf("Employee with Employee ID %d is working in ""Management"" department as ""Security Officer""",emp_id);
        else if(des_code=='C')
            printf("Employee with Employee ID %d is working in ""Management"" department as ""Clerk""",emp_id);        
        else 
            printf("The entered Employee ID or Department Number or Designation Code is invalid");        
        break;
    }
    case 30:{
        if(des_code=='M')
            printf("Employee with Employee ID %d is working in ""Sales"" department as ""Manager""",emp_id);
        else if(des_code=='S')
            printf("Employee with Employee ID %d is working in ""Sales"" department as ""Supervisor""",emp_id);
        else if(des_code=='O')
            printf("Employee with Employee ID %d is working in ""Sales"" department as ""Security Officer""",emp_id);
        else if(des_code=='C')
            printf("Employee with Employee ID %d is working in ""Sales"" department as ""Clerk""",emp_id);        
        else 
            printf("The entered Employee ID or Department Number or Designation Code is invalid");        
        break;
    }
    case 40:{
        if(des_code=='M')
            printf("Employee with Employee ID %d is working in ""Designing"" department as ""Manager""",emp_id);
        else if(des_code=='S')
            printf("Employee with Employee ID %d is working in ""Designing"" department as ""Supervisor""",emp_id);
        else if(des_code=='O')
            printf("Employee with Employee ID %d is working in ""Designing"" department as ""Security Officer""",emp_id);
        else if(des_code=='C')
            printf("Employee with Employee ID %d is working in ""Designing"" department as ""Clerk""",emp_id);        
        else 
            printf("The entered Employee ID or Department Number or Designation Code is invalid");        
        break;
    }
    default:
        printf("The entered Employee ID or Department Number or Designation Code is invalid");
        break;
    }
    return 0;
}