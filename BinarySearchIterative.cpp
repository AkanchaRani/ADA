#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {

    int low = 0;
    int high = size - 1;

    while (low <= high) {

        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            return mid;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {

    int arr[] = {2, 5, 8, 12, 16, 23, 38};

    int size = sizeof(arr) / sizeof(arr[0]);

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    int result = binarySearch(arr, size, key);

    if (result == -1)
        cout << "Element not found";
    else
        cout << "Element found at index " << result;

    return 0;
