#include <iostream>
using namespace std;

int partition(int data[], int low, int high) {

    int pivot = data[low];

    int too_big_index = low + 1;
    int too_small_index = high;

    while (true) {

        // Find element bigger than pivot
        while (too_big_index <= high &&
               data[too_big_index] <= pivot) {
            too_big_index++;
        }

        // Find element smaller than pivot
        while (too_small_index >= low &&
               data[too_small_index] > pivot) {
            too_small_index--;
        }

        // If pointers cross
        if (too_big_index >= too_small_index) {
            break;
        }

        // Swap
        swap(data[too_big_index], data[too_small_index]);
    }

    // Put pivot in correct position
    swap(data[low], data[too_small_index]);

    return too_small_index;
}

void quickSort(int data[], int low, int high) {

    if (low < high) {

        int pivotIndex = partition(data, low, high);

        quickSort(data, low, pivotIndex - 1);

        quickSort(data, pivotIndex + 1, high);
    }
}

int main() {

    int data[] = {40, 20, 10, 7, 50, 100};

    int size = sizeof(data) / sizeof(data[0]);

    quickSort(data, 0, size - 1);

    cout << "Sorted array: ";

    for (int i = 0; i < size; i++) {
        cout << data[i] << " ";
    }

    return 0;
