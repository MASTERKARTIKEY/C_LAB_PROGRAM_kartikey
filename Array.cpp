#include <iostream>
using namespace std;

int main() {
    int n;
    
    // Input the number of elements in the array
    cout << "Enter the number of elements: ";
    cin >> n;

    // Create the array
    int arr[n];

    // Input the elements of the array
    cout << "Enter the elements of the array:\n"; 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort the array in ascending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Output the array in ascending order
    cout << "\nArray in ascending order:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Sort the array in descending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Output the array in descending order
    cout << "Array in descending order:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

