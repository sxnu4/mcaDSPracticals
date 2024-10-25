#include <iostream>
using namespace std;

int main() {
    int i, j;

    // Top part of India
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 10; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Middle part of India
    for(i = 1; i <= 3; i++) {
        for(j = 1; j <= 5; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Bottom part of India
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 10; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}