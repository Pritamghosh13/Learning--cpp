#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int>& arr, int i, int j) {
    while (i < j) { // fixed stray semicolon and added braces
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main() {
    int n, k;
    cout << "Enter Array Size: ";
    cin >> n;

    vector<int> arr(n);  // fix: use a single vector of size n

    cout << "Enter Array Elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter K value: ";
    cin >> k;

    k = k % n; // handle k > n

    // Rotate array using reversal algorithm
    reverse(arr, 0, n - k - 1);
    reverse(arr, n - k, n - 1);
    reverse(arr, 0, n - 1);

    cout << "Rotated Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
