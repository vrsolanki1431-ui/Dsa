#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    int sum = 0;
    float avg;

    for(int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];

        sum = sum + arr[i];
    }

    avg = (float)sum / n;

    cout << "\nSum = " << sum << endl;
    cout << "Average = " << avg << endl;

    return 0;
}