#include<iostream>
using namespace std;
int binarysearch(int*arr,int size,int num)
{
    int l=0;
    int r=size-1;
    //int mid=(r-l)/2;
    while(l<=r)
    {
        int mid=l+(r-1)/2;
        if(arr[mid]==num)
            return 1;

        if(arr[mid]>num)
            r=mid-1;
        else
            l=mid+1;
    }
    return 0;
}
int main()
{
    int size;
    cout<<"Enter Size:";
    cin>>size;
    int arr[size];
    cout<<"Enter elements:";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int num;
    cout<<"Enter the key:";
    cin>>num;
    if(binarysearch(arr,size,num))
        cout<<"element found:";
    else
        cout<<"element not found";
}
