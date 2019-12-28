/*
    Program : Sort an array using Bubble sort
    Date:28th December 2019
    Author : Harsh Mishra
*/
void bubble_sort(int arr[],int n);
#include<stdio.h>
main()
{
    int arr[]={9,8,7,6,5,4,3,2,1};

    int n = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,9);
    printf("The Sorted Array is : ");
    for(int i=0;i<n;i++)
    {
        printf("\n%d",arr[i]);
    }
}
void bubble_sort(int arr[],int n)
{
    int i, j ,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
