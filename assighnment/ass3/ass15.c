/*Write a C program to simulate an ATM PIN verification system. The program should repeatedly prompt the
user to enter their PIN until either the correct PIN is entered or the maximum number of allowed attempts is
reached.*/
#include<stdio.h>
int main(){
    int c_pin;
    printf("Set the correct PIN");
    scanf("%d",&c_pin);
    int attempt=3;

    do
    {   
        int a_pin;
        printf("Enter the PIN");
        scanf("%d",&a_pin);
        if (a_pin==c_pin){
            printf("PIN verified successfully.\nAccess Granted.");
            break;
        }
        else {
            attempt--;

            if (attempt > 0) {
                printf("Incorrect PIN.\nAttempts remaining: %d\n", attempt);
            }
            else {
                printf("Incorrect PIN.\nMaximum attempts reached.\nAccount temporarily locked.");
            }
        }

    } 
    while (attempt > 0);
    return 0;
    
}