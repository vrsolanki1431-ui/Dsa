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

    int largest = arr[0];
    int second = arr[0];

    for(int i = 1; i < n; i++) {

        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }

        else if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    cout << "Largest Element = " << largest << endl;
    cout << "Second Largest Element = " << second;

    return 0;
}