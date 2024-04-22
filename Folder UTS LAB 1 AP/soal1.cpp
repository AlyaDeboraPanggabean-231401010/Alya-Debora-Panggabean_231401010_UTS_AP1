#include <iostream>
#include <iomanip> //library untuk setw
using namespace std;

int main ()
{
    int waktu, a, b, c, d ;
    ulang:
    cout << "Input waktu dalam detik : ";
    cin >> waktu;

    if (waktu < 0) { //inputan tidak dalam bentuk negatif
        cout << "Tidak bisa di konversi\n" << endl;
        goto ulang;
    }

    a = waktu / 3600; // jam
    b = waktu % 3600; // sisa detik 
    c = b / 60; // menit
    d = b % 60;

    cout << "HASIL KONVERSI" << endl;
    cout << setfill('0'); // Manipulator setfill('0') biar mengisi digit yang kosong dengan '0'
    cout << setw(2) << a << ":" << setw(2) << c << ":" << setw(2) << d << endl;

}