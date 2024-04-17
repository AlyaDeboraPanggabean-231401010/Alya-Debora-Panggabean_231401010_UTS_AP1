#include <iostream>
#include <math.h>
using namespace std;

int main(void) {
    int n;
    int prima = 1;

    system("cls");

    cout << "Insert a number: ";
    cin >> n;

    if (n <= 1) {
        cout << n << " bukanlah bilangan prima.";
    } else {
        for (int i = 2; i < n; ++i) {
            if (n % i == 0) {
                  prima = 0;
                  break;
            }
        }
    }

        if (prima) {
            cout << n << " merupakan bilangan prima.";
        } else {
            cout << n << " bukanlah bilangan prima.";
        }
            
    return 1;
}
