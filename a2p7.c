/*
CH-230-A
a2 7.c 
Ani Nikoladze-Janiashvili
anikoladze@jacobs-university.de
*/
 
#include <stdio.h>
 
int main(void) {
    int i = 8;
    while (i >= 4) {//added curley brackets to while function 
    //so that printf and i-- would  be executed as a part  of it
        printf("i is %d\n", i);
        i--;
    }
    printf("That's it.\n");
    return 0;
}