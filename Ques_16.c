/*
    Topic : Program to read three numbers and print maximum
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
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
            printf("Max is %d",a);
        }
        else
        {
            if(c > b)
            {
                printf("Max is %d",c);
            }
        }
    }
    else
    {
        if(b > c)
        {
            printf("Max is %d",b);
        }
    }
    return 0;
}