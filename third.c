#include<stdio.h>
int search(int arr[],int low,int high);
int main()
{
    int arr[]={1,2,2,1,3,4,3};
    int n=7;
    search(arr,0,7);
}
int search(int *arr,int low,int high)
{
    if (low>high)
    return 0;
}
if (low==high)
{
    printf("the element is %d",arr[low]);
    return 0;
    
}
int mid=(low+high)/2;
if(mid%2==0)
{
    if(arr[mid]==arr[mid+1])
    search(arr,mid+2,high);
    else
    search(arr,low,mid);
}
else
{
    if(arr[mid]==arr[mid-1])
    search(arr,mid-2,high);
    else
    search(arr,low.mid-1);
}
