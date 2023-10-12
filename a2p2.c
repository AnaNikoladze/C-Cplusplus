/*
CH-230-A
a2 2.c
Ani NIkoladze-Janiashvili
anikoladze@jacobs-university.de
*/
 
#include <stdio.h>
 
int main(void) {
    char c;
    scanf("%c", &c); //scanf reads a char from the keyboard
    printf("character=%c\n", c); /*it writes char as a charachter*/
    printf("decimal=%d\n", c);/*it prints chars in decimal notation*/
    printf("octal=%o\n", c);/* it writes char in octal notation*/
    printf("hexadecimal=%x\n", c);/* it  writes char in hexidemical notation*/
    return 0;
}