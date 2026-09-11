// escape squence : \n \r \t \b \" \' %% \\n

#include <stdio.h>
int main(){
    printf("Hello\nEveryone\n");
    printf("Good  Morning\rGreat\n");
    printf("apt\t c++\t c\t\n");
    printf("i am working on day2_2\b\b\b1\n");
    printf("\"how are you\"\n");
    printf("\'how are you\'\n");
    printf("I have scored 82%%\n");
    printf("\\I have scored 82%%\n");
    return 0;
}