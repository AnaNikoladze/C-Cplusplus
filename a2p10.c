/*
CH-230-A
a2 10.c 
Ani Nikoladze-Janiashvili
anikoladze@jacobs-university.de
*/
#include <stdio.h>
 
 
int main(void) {
    int n;
    int days = 1;
    while (scanf("%d", &n)) {// run an endless loop
        if (0 < n) {// find out whether n is a valid input
            while (days <= n) {// run a loop to count days
                if (days == 1)
                    printf("%d day = %d hours\n", days, 24 * days);
                    // print it for day 1
                else
                    printf("%d days = %d hours\n", days, 24 * days);
                    // general print function
                ++days;// increase amount of days
            }
            return 0;
        }
    }
}
