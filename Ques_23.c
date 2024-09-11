/*
    Topic : Program to read two numbers and calculate power without
    using the header file <math.h>
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
    Description : Taking input from user two numbers (a and b)
    and then using the concept of loops to calculate a^b
    a^b = a * a * a * a so on till b times
*/

#include <stdio.h>

int main()
 {
    int base, exp;
    long double result = 1.0;
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exp);

    while (exp != 0) 
    {
        result = result*base;
        --exp;
    }
    printf("Answer = %.0Lf", result);
    return 0;
}
