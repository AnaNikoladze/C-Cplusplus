#include <stdio.h>
 
int main() {
 
    float  result;
    int a = 5;
    float b = 13.5; /* 13.5 is not a whole number, so we can refer to it a an int because than the program will only precive its whole part. Therefor if we write float , the program perceives the number in full.*/
    result = a / b;
    printf("The result is %f/n", result); /*because we are dividing 5 with fractional number we should use %F because is supports much wider range of values.*/
    return 0;
 
}