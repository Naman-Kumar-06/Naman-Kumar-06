#include<iostream>
#include<cmath>
using namespace std;

int linearsearch(int* arr, int prev, int next, int key) {
    for(int i = prev; i <= next; i++) {
        if(arr[i] == key)
            return 1;
    }
    return 0;
}

int jumpsearch(int* arr, int size, int key) {
    int n = sqrt(size);
    int prev = 0;
    int next = n;

    while (next < size) {
        if (arr[next] >= key) {
            return linearsearch(arr, prev, next, key);
        }
        prev = next;
        next += n;
    }
    return linearsearch(arr, prev, size - 1, key);
}

int main() {
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
