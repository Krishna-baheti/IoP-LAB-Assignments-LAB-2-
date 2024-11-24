/*
    Topic : Program to calculate factorial of a number
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/

#include<stdio.h>

int main()
{
    printf("Enter any number : ");
    int num;
    scanf("%d",&num);
    int factorial = 1;
    for(int i = 1; i <= num; i++)
    {
        factorial = factorial*i;
    }
    printf("Factorial of %d is %d \n",num,factorial);
    return 0;
}