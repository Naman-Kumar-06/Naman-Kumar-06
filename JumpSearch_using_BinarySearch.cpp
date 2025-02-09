#include<iostream>
using namespace std;
int binarysearch(int*arr,int prev,int next,int num)
{
    while(prev<=next)
    {
        int mid=prev+(next-prev)/2;
        if(arr[mid]==num)
            return 1;

        if(arr[mid]>num)
            next=mid-1;
        else
            prev=mid+1;
    }
    return 0;
}
int jumpsearch(int* arr, int size, int key) {
    int prev = 0;
    int next = 2;

    while (next < size) {
        if(arr[next]==key)
            return 1;
        if (arr[next] >= key && next<size) {
            return binarysearch(arr, prev, next, key);
        }
        prev = next;
        next *= 2;
    }
    return binarysearch(arr, prev, min(next,size-1), key);
}
int main()
{
    int n;
    cout << "Enter Size: ";
    cin >> n;
    int arr[n];
    cout << "Enter Elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int key;
    cout << "Enter key: ";
    cin >> key;

    if (jumpsearch(arr, n, key)) {
        cout << "Element found" << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}
