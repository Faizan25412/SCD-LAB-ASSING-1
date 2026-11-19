// Name: Muhammad Faizan
// ID: 25412
#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int roll;
    float gpa;
};

int main() {
    Student students[3];
    for (int i = 0; i < 3; i++) {
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> students[i].name;
        cout << "Enter roll number of student " << i + 1 << ": ";
        cin >> students[i].roll;
        cout << "Enter GPA of student " << i + 1 << ": ";
        cin >> students[i].gpa;
    }
    for (int i = 0; i < 3; i++) {
        cout << "Student " << i + 1 << ": " << students[i].name
             << ", Roll: " << students[i].roll
             << ", GPA: " << students[i].gpa << endl;
    }
    return 0;
}
