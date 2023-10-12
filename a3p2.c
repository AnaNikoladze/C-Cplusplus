/*
CH-230-A
a3 p2.c
Ani Nikoladze-Janiashvili
anikoladze@jacobs-university.de
*/
 
 
 
 
#include <stdio.h>
 
int main() {
 
    char ch;
    int n;
    int i;// we will need i for the loop down there
 
 
    scanf("%c", &ch);
    scanf("%d", &n);
 
 
    printf("%C, ", ch);
 
 
 
    for (i = 1; i < n; i++) {
        printf("%c-%d, ", ch, i);
    }
 
    printf("%c-%d\n", ch, i);
 
    return 0;
}
