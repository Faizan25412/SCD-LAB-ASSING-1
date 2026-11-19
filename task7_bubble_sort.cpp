// Name: Muhammad Faizan
// ID: 25412
#include <iostream>
using namespace std;

int main() {
    int arr[10] = {64, 34, 25, 12, 22, 11, 90, 45, 5, 78};
    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Sorted array: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
