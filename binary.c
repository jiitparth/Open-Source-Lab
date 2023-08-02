#include<stdio.h>
int bin(int arr[],int l,int h,int x)
{
    if(h>=l)
    {


    int mid=l+(h-l)/2;
    if(arr[mid]==x)
    {
        return mid;
    }
    if(arr[mid]>x)
    {
        return bin(arr,l,mid-1,x);
    }
    return bin(arr,mid+1,h,x);
    }
    return -1;

}
void main()
{
    int arr[]={1,2,4,9,11};
    int x,n=sizeof(arr)/sizeof(arr[0]);
    scanf("%d",&x);
    printf("%d",bin(arr,0,n-1,x));
}
