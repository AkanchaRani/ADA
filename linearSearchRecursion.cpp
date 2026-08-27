#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target, int index = 0) {

    if(index == n) {
        return -1;
    }

    if(arr[index] == target) {
        return index;
    }

    return linearSearch(arr, n, target, index + 1);
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


 