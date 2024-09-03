/*
    Topic : Program to read three numbers and print maximum
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
    Description : Taking input from user three numbers and printing
    the max of them using if-else
*/
#include<stdio.h>
int main()
{
    printf("Enter three numbers \n");
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a > b)
    {
        if(a > c)
        {
            printf("%d",a);
        }
        else
        {
            if(c > b)
            {
                printf("%d",c);
            }
        }
    }
    else
    {
        if(b > c)
        {
            printf("%d",b);
        }
    }
    return 0;
}