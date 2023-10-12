#include <stdio.h>
/*
CH-230-A
a1 p4.[c or cpp or h]
Ani Nikoladze-Janishvili
anikoladze@jacobs-university.de*/
 
int main(){
 
    int x;
    int y;
    int sum;
    int product;
    int difference;
    float division;
    int remainder;
    x = 17;
    y = 4;
    printf("x=%d\ny=%d\n", x, y);
    sum = x + y;
    printf("sum=%d\n", sum);
    product = x * y;
    printf("product=%d\n", product);
    difference = x - y;
    printf("difference=%d\n", difference);
    division = (float)x / (float)y;
    printf("division=%f\n",division);
    remainder = x%y;
    printf("remainder of division=%d",remainder);
    return 0;
 
}
