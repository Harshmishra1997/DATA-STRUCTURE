/*
    Author: Harsh Mishra
    date:13th june 2019
    Program:To check wheater the number is armstrong or not
*/
#include<stdio.h>
main()
{
    int n,sum=0,r,c;
    printf("enter the number number: ");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        c=r*r*r;
        sum=sum+c;
        n=n/10;
    }
    if(n==sum)
    {
        printf("number is armstrong");
    }
    else
    {
        printf("invalid number");
    }
}
