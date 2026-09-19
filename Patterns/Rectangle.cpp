#include <iostream>
using namespace std;

//Hollow rectangle pattern

int main() {

    int l;
    cout << "Enter the value of l" << endl;
    cin >> l;

    int b;
    cout << "Enter the value of b" << endl;
    cin >> b;


    for(int row = 1; row <= l; row++) {

        for(int col = 1; col <= b; col++) {

            if(row == 1 || row == l || col == 1 || col == b) {  
                cout << "* ";
            }

            else {
                cout << "  ";
            }
        }

        cout << endl;
    }

    return 0;
}