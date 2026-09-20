//print the ASCII value of User Entered Character in decimal,hex,octal and character Format
#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("Decimal     : %d\n", ch);
    printf("Hexadecimal : %x\n", ch);
    printf("Octal       : %o\n", ch);
    printf("Character   : %c\n", ch);
    return 0;
}