/*
    Program: Rotate the Array by leftRotation
    Date: 25th November 2019
    Author: Harsh Mishra
*/
#include<stdio.h>
int leftrotatebyone(int arr[],int n);
int rotateleft(int arr[],int d,int n);
int printarray(int arr[],int n);
main()
{                                          //Driver function
    int d ;
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    rotateleft(arr,d,7);
    printarray(arr,n);

}
int leftrotatebyone(int arr[],int n)       //Rotate the array one by one
{
    int temp=arr[0] , i;
    for(i=0;i<n-1;i++)
        arr[i]=arr[i+1];
        arr[i]=temp;
}
int rotateleft(int arr[],int d,int n)     //Taking the function(leftrotatebyone) number of times
                                            //it will rotate the function
{
    int i;
    for(i=0;i<d;i++)
        leftrotatebyone(arr,n);
}
int printarray(int arr[],int n) `           //print the array
{
    int i ;
    for(i=0;i<n;i++)
    {
        printf(" %d ",arr[i]);
    }
}
