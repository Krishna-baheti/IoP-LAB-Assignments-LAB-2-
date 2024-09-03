/*
    Topic : Program to read three numbers and print maximum
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
    Description : Taking input from user three numbers and printing
    the max of them using conditional operators
*/
#include<stdio.h>

int main() 
{
    printf("Enter three numbers \n");
    int num1,num2,num3,max;
    scanf("%d%d%d",&num1,&num2,&num3);
    max = (num1 > num2 && num1 > num3 ? num1 : num2 > num3 ? num2 : num3);
    printf("The max of %d, %d and %d is %d \n",num1,num2,num3,max);
    return 0;
}