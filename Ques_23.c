/*
    Topic : Program to read two numbers and calculate power without
    using the header file <math.h>
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
    Description : Taking input from user two numbers (a and b)
    and then using the concept of loops to calculate a^b
    a^b = a * a * a * a so on till b times
*/

#include<stdio.h>

int main()
{
    printf("Enter two numbers \n");
    int a,b,power = 1;
    scanf("%d%d",&a,&b);
    while (b != 0) 
    {
        power = power*a;
    }
    printf("%d",power);
    return 0;
}