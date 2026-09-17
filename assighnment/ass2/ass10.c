/*rite a program to simulate ATM cash withdrawal.
Accept
Account Balance
Withdrawal Amount
Perform the following checks:
If the withdrawal amount is greater than the available balance, display "Insufficient Balance".
Otherwise, check whether the withdrawal amount is a multiple of 100 or 500.
If valid, display "Transaction Successful".
Otherwise display "Enter Amount in Multiples of 100 or 500“.
Input Format
Account Balance
Withdrawal Amount*/

#include<stdio.h>
int main(){
    int acc_bal,wit_amt;
    printf("Enter the Account Balance: ");
    scanf("%d",&acc_bal);
    printf("Enter the Withdrawal Amount: ");
    scanf("%d",&wit_amt);

    if(acc_bal<wit_amt){
        printf("Insufficient Balance!");
    }
    else{
        if(wit_amt%100==0||wit_amt%500==0){
            printf("Transaction Successful!");
        }
        else{
            printf("Enter Amount in Multiples of 100 or 500!");
        }
    }
}