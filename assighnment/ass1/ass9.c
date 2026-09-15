/*A library charges a late fine of 3.50 per day for overdue books.
Write a C program to calculate the total fine, GST, and final amount payable based on the number of
overdue days.
The program should:
Accept the number of overdue days from the user.
Calculate the Total Fine using the fine rate of ₹3.50 per day.
Calculate GST at 18% on the total fine.
Calculate the Final Amount Payable by adding the GST to the total fine.
Display all amounts with two decimal places*/

#include<stdio.h>
int main(){
    float num;
    printf("Enter the Due Days: ");
    scanf("%f",&num);

    float late_fees=num*3.50;
    printf("Total Fine: %.2f\n",late_fees);
    
    float gst=late_fees*18/100;
    printf("GST(18%%): %.2f\n",gst);

    float total_fine=late_fees+gst;
    printf("Total Fine: %0.2f\n",total_fine);

    return 0;

}