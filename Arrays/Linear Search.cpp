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

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    bool found = false;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            found = true;
            cout << "Element found at position " << i + 1;
            break;
        }
    }

    if(found == false) {
        cout << "Element not found";
    }

    return 0;
}