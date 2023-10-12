/*
CH-230-A
a3 p4.c
Ani Nikoladze-Janiashvili
anikoladze@jacobs-university.de
*/
 
 
#include <stdio.h>
int position(char str[], char c) {
    int idx;
    /* Loop until end of string */
    for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx) {
        /* do nothing */
    }
    // returd idx must be placed outside 
    // the loop otherwise it would have return
    //value idx=0
    return idx;
 
}
int main() {
    char line[80];
    while (1) {
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("The first occurrence of 'g' is: %d\n", position(line, 'g'));
    }
}
