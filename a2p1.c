/*
CH-230-A
a2 p1.[c or cpp or h]
Firstname Lastname Ani Nikoladze-Janiashvili
anikoladze@jacobs-university.de
*/
 
 
#include <stdio.h>
 
int main(void) {
    double a, b;
    scanf("%lf%lf", &a, &b);
    printf("sum of doubles=%.6f\n", a + b);
    printf("difference of doubles=%.6f\n", a - b);
    printf("square=%.6f\n", a * a);
    int c, d;
    scanf("%d%d", &c, &d);
    printf("sum of integers=%d\n", c + d);
    printf("product of integers=%d\n", c * d);
    char e, f;
    
 
    scanf("%c%c%c%c", &e, &e, &f, &f);
    printf("sum of chars=%d\n", (e + f));
    printf("product of chars=%d\n", (e * f));
    printf("sum of chars=%c\n", (e + f));
    printf("product of chars=%c\n", (e * f));
    return 0;
}