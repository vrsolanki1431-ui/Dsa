#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int last = arr[n - 1];

    for(int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = last;

    cout << "\nArray after right rotation:\n";

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}