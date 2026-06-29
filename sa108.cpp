#include <iostream>
using namespace std;

int main() {
    string name;
    float m1, m2, m3, total, per;

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Marks of 3 Subjects: ";
    cin >> m1 >> m2 >> m3;

    total = m1 + m2 + m3;
    per = total / 3;

    cout << "\n----- Marksheet -----\n";
    cout << "Name       : " << name << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Percentage : " << per << "%" << endl;

    if (per >= 90)
        cout << "Grade: A+";
    else if (per >= 75)
        cout << "Grade: A";
    else if (per >= 60)
        cout << "Grade: B";
    else if (per >= 40)
        cout << "Grade: C";
    else
        cout << "Grade: Fail";

    return 0;
}