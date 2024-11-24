/*
    Topic : Program to create a simple calculator using switch case
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/
#include<stdio.h>

int main()
{
    int num1,num2;
    char op;
    printf("Enter the operation to be performed : ");
    scanf("%c",&op);
    printf("Enter the two numbers \n");
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