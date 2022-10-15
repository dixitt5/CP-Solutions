#include <iostream>

using namespace std;

int main() {

    int i, num;

    // Take number from user
    cout << "Enter any number : ";
    cin >> num;

    cout << endl << "Natural numbers from 1 to " << num << endl;
    for(i = 1; i <= num; i++) {

        cout << i << " ";
    }

    return 0;
}
