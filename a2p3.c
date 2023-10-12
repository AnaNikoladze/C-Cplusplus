/*
CH-230-A
a2 3.c
Ani NIkoladze-Janiashvili
anikoladze@jacobs-university.de
*/
 
#include <stdio.h>
 
int main(void) {
    int a, b, c; /*declaring  variables*/
    scanf("%d%d%d", &a, &b, &c); 
    printf("%d\n", 24 * 7 * a + 24 * b + c); /* 24*7 hours are in week, it prints the total number of hours */
    return 0;
}