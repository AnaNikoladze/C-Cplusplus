/*
CH-230-A
a3 p1.c
Ani Nikoladze-Janiashvili
anikoladze@jacobs-university.de
*/
 
 
 
#include <stdio.h>
 
int main(void) {
    float x;
    int n;
    scanf("%f", &x);
    while (scanf("%d", &n)) {// making sure that n will have valid integer value
        if (n <= 0) {
            printf("Input is invalid, reenter value\n");
        }
        else {
            int i = 1;
            while (i <= n) { //repating entering n until valid value is  entered
                printf("%f\n", x);
                i += 1;
            }
            break;
        }
    }
}
