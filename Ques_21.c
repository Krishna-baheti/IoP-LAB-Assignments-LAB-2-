/*
    Topic : Program to read two no. and perform aithmetic task using switch case
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
    Description : Taking input from user two numbers and adding them using
    switch case in char form
*/

#include<stdio.h>

int main()
{
    printf("Enter the char '+' to add the numbers \n");
    char operation;
    int num1,num2;
    scanf("%c",&operation);
    scanf("%d%d",&num1,&num2);
    switch (operation)
    {
    case '+' : printf("Sum of %d and %d is %d",num1,num2,num1 + num2);
        break;
    default: printf("Invalid operation choosen \n");
        break;
    }
    return 0;
}
