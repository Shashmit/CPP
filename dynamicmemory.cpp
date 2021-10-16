#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter total numbers: ";
    cin >> num;
    float* ptr;
    ptr = new float[num];

    cout << "Enter every number" << endl;
    for (int i = 0; i < num; ++i) {
        cout << "Number - " << i + 1 << ": ";
        cin >> *(ptr + i);
    }

    cout << "\nDisplaying Numbers " << endl;
    for (int i = 0; i < num; ++i) {
        cout << "Student" << i + 1 << " :" << *(ptr + i)*2 << endl;
    }
    delete[] ptr;
    return 0;
}