/*
CH-230-A
a2 8.c
ani nikoladze-janiashvili
anikoladze@jacobs-university.de
*/
 
 
#include <stdio.h>
 
int main(void) {
    int a;
    scanf("%d", &a); //if function will execute its contents 
    //when a is both divasible by 2 and 7
    if (a % 2 == 0 && a % 7 == 0)
        printf("The number is divisible by 2 and 7\n");
    else
        printf("The number is NOT divisible by 2 and 7\n");
}