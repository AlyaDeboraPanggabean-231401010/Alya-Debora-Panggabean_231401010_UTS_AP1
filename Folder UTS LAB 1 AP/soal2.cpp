#include <iostream>
using namespace std;

int main() {
    string kalimat;
    int i;

    cout << "Masukkan beberapa kalimat : ";
    getline (cin, kalimat);

    for (i=0; i<kalimat.length(); i++) { //untuk ubah kalimat ke dlm bentuk huruf kapital
        kalimat[i] = toupper(kalimat[i]);
    }
    
    cout << "Kalimat dalam huruf kapital : " << kalimat << endl;
    
return 0;
}