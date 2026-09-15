/*Write a C program to display the size, format specifier, and range of the following integer data types:
char
unsigned char
short int
unsigned short int
int
unsigned int
long int
unsigned long int
The program should:
Use the appropriate constants from the standard header files to determine the minimum and
maximum values.
Display the size in bytes, format specifier, and range for each data type.
Do not use spaces or extra formatting characters to align the columns.
Observe that the size and range of data types may vary depending on the compiler and
system.
*/

#include <stdio.h>
#include <limits.h>

int main()
{
    printf("DataType Size FormatSpecifier Range\n");

    printf("char %zu %%c %d to %d\n",
           sizeof(char), CHAR_MIN, CHAR_MAX);

    printf("unsigned char %zu %%hhu %u to %u\n",
           sizeof(unsigned char), 0U, UCHAR_MAX);

    printf("short int %zu %%hd %d to %d\n",
           sizeof(short int), SHRT_MIN, SHRT_MAX);

    printf("unsigned short int %zu %%hu %u to %u\n",
           sizeof(unsigned short int), 0U, USHRT_MAX);

    printf("int %zu %%d %d to %d\n",
           sizeof(int), INT_MIN, INT_MAX);

    printf("unsigned int %zu %%u %u to %u\n",
           sizeof(unsigned int), 0U, UINT_MAX);

    printf("long int %zu %%ld %ld to %ld\n",
           sizeof(long int), LONG_MIN, LONG_MAX);

    printf("unsigned long int %zu %%lu %lu to %lu\n",
           sizeof(unsigned long int), 0UL, ULONG_MAX);

    return 0;
}