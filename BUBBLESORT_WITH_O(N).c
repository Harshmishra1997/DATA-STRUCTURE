/*
    Program: Bubble sort with Complexity of O(n)
    Author: Harsh Mishra
    Date : 28th December 2019
*/
void bubblesort(int arr[],int n);
#include<stdio.h>
int main()
{
    int i ;
    int arr[10]={9,8,7,6,5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("The Sorted Array: ");
    bubblesort(arr,n);
    for(i=0;i<n;i++)
    {
        printf("\n%d",arr[i]);
    }
    return 0;
}
void bubblesort(int arr[],int n)
{
    int i , temp, swapped=0; ;
    for(int pass=n-1;pass>=0&&swapped;pass--)
    {
        for(i=0;i<=pass-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
}
