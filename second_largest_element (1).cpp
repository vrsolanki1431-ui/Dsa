#include <iostream>
#include <climits>
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

    int largest = INT_MIN;
    int second = INT_MIN;

    for(int i = 0; i < n; i++) {

        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    if(second == INT_MIN) {
        cout << "Second Largest Element does not exist.";
    }
    else {
        cout << "Largest Element = " << largest << endl;
        cout << "Second Largest Element = " << second;
    }

    return 0;
}