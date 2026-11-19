// Name: Muhammad Faizan
// ID: 25412
#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int value;
    cout << "Enter value to search: ";
    cin >> value;
    int index = -1;
    for (int i = 0; i < 10; i++) {
        if (arr[i] == value) {
            index = i;
            break;
        }
    }
    if (index != -1) {
        cout << value << " found at index " << index << endl;
    } else {
        cout << value << " not found in the array" << endl;
    }
    return 0;
}
