/*
    Author: Harsh Mishra
    Date: 10/1/2019
    program: Finding the missing number in an array
*/
#include<stdio.h>
#include<stdlib.h>
main()
{
    int i,n1,n2,arr[50],sum1=0,sum2=0,missing_number=0;
    //Taking the automatic input for array and declaration of Expected list
    printf("enter the value of n: ");
    scanf("%d",&n1);
    sum1 = n1*(n1+1)/2;

    printf("the sum of expected list is %d\n\n",sum1);

    //Taking the input for your list
    printf("enter your list\n");
    scanf("%d",&n2);
    {
    for(i=1;i<n2;i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&i);
        sum2=sum2+i;
    }
    printf("The sum of your list is %d\n",sum2);
    missing_number=sum1-sum2;
    printf("The missing number is %d",missing_number);
}
}
