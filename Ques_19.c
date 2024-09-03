/*
    Topic : Program to read a character a check whether it is 
    small case or not using conditional operators
    Author : Krishna Baheti (Branch - AI, Roll no. = B-66, Batch -2)
    Description : Taking input from user any arbitrary character and then
    using ASCII values to check whether its a small case letter or not
*/

#include<stdio.h>

int main()
{
    printf("Enter a letter \n");
    char ch;
    scanf("%c",&ch);
    ch >= 97 && ch <= 122 ? printf("SMALL Case letter \n") :
    printf("Not a SMALL Case letter \n");
    return 0;
}