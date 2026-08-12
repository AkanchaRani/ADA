#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int greatestPrime = -1;

    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i]) && arr[i] > greatestPrime) {
            greatestPrime = arr[i];
        }
    }

    if (greatestPrime == -1)
        cout << "No prime number found";
    else
        cout << "Greatest prime number: " << greatestPrime;

    return 0;
