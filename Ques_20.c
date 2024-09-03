/*
    Topic : Program to create a simple calculator using switch case
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
    Description : Taking input from user the operation which they want
    to perform in form character and then doing the arithmetic
*/
#include<stdio.h>

int main()
{
    printf("Enter the two numbers \n");
    int num1,num2;
    char op;
    scanf("%c",&op);
    scanf("%d",&num1);
    scanf("%d",&num2);
    switch (op)
    {
    case '+': printf("%d",num1+num2);
        break;
    case '-' : printf("%d",num1-num2);
        break;
    case '*' : printf("%d",num1*num2);
        break;
    case '/' : printf("%f",(float)num1/num2);
        break;
    case '%' : printf("%d",num1%num2); // to get the remainder
        break;
    default : printf("Invalid operation choosen \n");
    }
    return 0;
}