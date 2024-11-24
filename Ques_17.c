/*
    Topic : Program to read three numbers and print maximum using logical operators
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
*/
#include<stdio.h>
int main()
{
    printf("Enter three numbers \n");
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a > b && a > c)
    {
        printf("Max number is %d",a);
    }
    else if(b>c)
    {
        printf("Max number is %d",b);
    }
    else
    {
        printf("Max number is %d",c);
    }
    return 0;
}