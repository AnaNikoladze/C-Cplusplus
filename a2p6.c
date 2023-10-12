/*
CH-230-A
Ani Nikoladze-Janiashvili
a2 6.c 
anikoladze@jacobs-university.de
*/
 
 
#include <stdio.h>
 
int main(void) {
    double x, y;
    scanf("%lf%lf", &x, &y);
    // recieves value for variables
    double* ptr_one, * ptr_two, * ptr_three; //decleres pointers
    ptr_one = &x;
    ptr_two = &x;
    ptr_three = &y;
    printf("%p\n", ptr_one);//prints adresses
    printf("%p\n", ptr_two);
    printf("%p\n", ptr_three);
    return 0;
}
