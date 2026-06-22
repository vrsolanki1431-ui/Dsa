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

    int smallest = arr[0];
    int largest = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] < smallest)
            smallest = arr[i];

        if(arr[i] > largest)
            largest = arr[i];
    }

    cout << "\nSmallest Element = " << smallest << endl;
    cout << "Largest Element = " << largest << endl;

    return 0;
}