#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    string bilangan;
    int i,temp;
    int total = 0;
    int prima = 1;

    cout << "Masukkan beberapa angka : ";
    getline (cin, bilangan);

    for (i=0; i<bilangan.length(); i++) { 
        prima = 1;
        temp = bilangan[i]-'0'; //mengonversi karakter pada indeks i dari string bilangan menjadi bilangan bulat

        if (temp <= 1){
            prima = 0;
        } else {
            for (int j = 2; j <= sqrt(temp); j++) {
                if (temp % j == 0) {
                prima = 0;
                break;
                }
            } 
        }
        if (prima){
            total += temp;
        }
             
    }
     cout << "Penjumlahan bilangan - bilangan prima : " << total << endl;
}