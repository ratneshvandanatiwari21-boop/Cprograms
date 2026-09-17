/*Create a menu-driven program that allows the user to choose one of the following chess pieces.*/
#include<stdio.h>
int main(){
    int choice;
    printf("Enter the Choice: \n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("KING: 1 square forward/backward or 1 square diagonally forward/backward");
        break;
    case 2:
        printf("QUEEN: Horizontally, vertically, or diagonally any number of squares");
        break;
    case 3:
        printf("ROOK:  Horizontally or vertically any number of squares");
        break;
    case 4:
        printf("BISHOP: Diagonally any number of squares");
        break;
    case 5:
        printf("KNIGHT: L-shape 2 squares in one direction + 1 perpendicular can jump over pieces");
        break;
    case 6:
        printf("PAWN: 1 square forward 2 on first move, captures 1 square diagonally forward; promotion on last rank; en passant possible");
        break;
    default:
        break;
    }
    return 0;
}