/*
CH-230-A
a2 4.c
Ani NIkoladze-Janiashvili
anikoladze@jacobs-university.de
*/
#include <stdio.h>
 
int main(void) {
    float a, b, h; 
    scanf("%f%f%f", &a, &b, &h); 
    //recieves numbers as an input
 
    //calculate area of figures and then print it
    printf("square area=%f\n", a * a); 
    printf("rectangle area=%f\n", a * b);
    printf("triangle area=%f\n", a * h / 2);
    printf("trapezoid area=%f\n", h * (a + b) / 2);
    return 0;
}