/*
    Topic : Program to read three numbers and print maximum using conditional op
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/
#include<stdio.h>

int main() 
{
    printf("Enter three numbers \n");
    int num1,num2,num3,max;
    scanf("%d%d%d",&num1,&num2,&num3);
    max = (num1 > num2 ? (num1 > num3 ? num1 : num3) : ((num2 > num3) ? num2 : num3));
    printf("Max is %d\n",max);
    return 0;
}

