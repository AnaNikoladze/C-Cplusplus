 
/*
CH-230-A
a2 5.c
ani nikoladze-janiashvili
anikoladze@jacobs-university.de
*/
 
 
#include <stdio.h>
 
int main(void) {
    //recieves and prints a value
    int a;
    int* ptr_a;
    scanf("%d", &a);
    printf("%d\n", a);
    ptr_a = &a;
    //prints the value of a and then prints a value and adress
    printf("%p\n", ptr_a);
    // add 5 to a through pointer
    *ptr_a += 5;
    printf("%d\n", a);
    printf("%p\n", ptr_a);
    return 0;
}