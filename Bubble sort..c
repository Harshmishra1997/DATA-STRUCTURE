/* Implementation of Bubble Sort */
#include<stdio.h>
#include<stdlib.h>
main()
{
    int arr[5] , n,i,temp,j ;
    printf("enter the no of element for array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\narr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("after sorting of element in the array: ");
    for(i=0;i<n-1;i++)
    {
        for(j=1;j<n-1-i;j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
        for(i=0;i<n;i++)
        printf("%d\n",arr[i]);
}
