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

    int first = arr[0];

    for(int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    arr[n - 1] = first;

    cout << "\nArray after left rotation:\n";

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}