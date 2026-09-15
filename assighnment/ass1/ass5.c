/*Write a C program to display an invoice in a properly formatted manner and print the ASCII values of
selected escape sequences.
The program should:
Display the invoice using the escape sequences \n and \t to arrange the data in rows and columns.
Display the ASCII values of the following escape sequence characters:
• New Line (\n)
• Horizontal Tab (\t)
• Backslash (\\)
• Double Quote (\")
• Single Quote (\')*/

#include<stdio.h>
int main(){
    printf("Items\tQuantity\tPrice\n");
    printf("Pen\t10\t\t100\n");
    printf("Book\t5\t\t250\n");
    printf("Pencil\t10\t\t40\n\n");

    printf("ASCII Values: \n");
    printf("New Line       : %d\n", '\n');
    printf("Horizontal Tab : %d\n", '\t');
    printf("Backslash      : %d\n", '\\');
    printf("Double Quote   : %d\n", '\"');
    printf("Single Quote   : %d\n", '\'');
    
    return 0;
}