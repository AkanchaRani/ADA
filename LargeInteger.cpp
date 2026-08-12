#include <iostream>
using namespace std;

#define BASE 10

// Convert normal integer into array representation
void make_int(int A[], int no, int n) {

    int i = 0;

    while (no) {
        A[i++] = no % BASE;
        no = no / BASE;
    }

    // Fill remaining positions with 0
    while (i < n) {
        A[i++] = 0;
    }
}

// Add 1 to the big integer
void increment(int A[], int n) {

    int i = 0;

    while (i < n) {

        A[i]++;

        if (A[i] == BASE) {
            A[i] = 0;
            i++;
        }
        else {
            break;
        }
    }
}

int main() {

    int A[20];
    int n = 20;

    int no;

    cout << "Enter number: ";
    cin >> no;

    make_int(A, no, n);

    increment(A, n);

    cout << "After adding 1: ";

    // Print from most significant digit
    int i = n - 1;

    while (i > 0 && A[i] == 0) {
        i--;
    }

    while (i >= 0) {
       cout <<A[i];
       i--;
    }

    return 0;
}

