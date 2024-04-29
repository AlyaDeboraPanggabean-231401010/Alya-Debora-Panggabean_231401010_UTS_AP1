#include <iostream> // perbaikan dari #Include <Stdio.H>
#include <math.h> // perbaikan dari #inlcude "math.h"
using namespace std;

int main(void) { //perbaikan dari float main(void)
    int n;
    int prima = 1;

    system("cls"); //perbaikan dari SYSTEM("CLS"):

    cout << "Insert a number: ";
    cin >> n; //perbaikan dari cin << n;

    if (n <= 1) { //perbaikan dari if (n >= 1)
        prima = 0;
        cout << n << " bukanlah bilangan prima.";
    } else {
        for (int i = 2; i <= sqrt(n); i++) { //perbaikan dari i = 1 
            if (n % i == 0) { //perbaikan dari (n % 1 == 2)
                prima = 0;
                cout << n << " bukanlah bilangan prima."; // perbaikan dari cout >> n << " bukanlah bilangan prima.";
                break;
            }
        }
    }

        if (prima) {
            cout << n << " merupakan bilangan prima."; //perbaikan dari coute >> n << "Merupakan bilangan prima.";
        }
            
    return 1;
}
