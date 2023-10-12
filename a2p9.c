/*
CH-230-A
Ani nikoladze-Janiashvili
a2 9.c
anikoladze@jacobs-university.de
*/
 
#include <stdio.h>
 
int main(void) {
    char c;
    scanf("%c", &c); // take input ,
    if ('0' <= c && c <= '9') // check wheter c is a number
        printf("%c is a digit\n", c);
    else
        if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
        //check whether c is a character 
            printf("%c is a letter\n", c);
        else // executes if non of above statments are true
            printf("%c is some other symbol\n", c);
}