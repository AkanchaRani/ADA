#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {

    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            return i;
        }
    }

    return -1;
}

int main() {

    int arr[] = {12, 2, 25, 9, 18};

    int size = sizeof(arr) / sizeof(arr[0]);

    int target = 9;

    int index = linearSearch(arr, size, target);

    if(index == -1)
        cout << "Not Found";
    else
        cout << "Found at index: " << index;

    return 0;
}
