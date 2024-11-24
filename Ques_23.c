/*
    Topic : Program to read two numbers and calculate power without
            using the header file <math.h>
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include <stdio.h>

int main()
 {
    int base, exp;
    int answer = 1.0;
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exp);

    while (exp != 0) 
    {
        answer = answer*base;
        exp--;
    }
    printf("Answer = %d", answer);
    return 0;
}

    
