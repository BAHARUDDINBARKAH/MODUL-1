#include <iostream>
using namespace std;

int main() {

    int bilangan1, bilangan2, hasilTambah, hasilKurang, hasilKali, hasilBagi;
    cout << " Masukan bilangan pertama : ";
    cin >> bilangan1;
    cout << " Masukan bilangan kedua : ";
    cin >> bilangan2;

    hasilTambah = bilangan1 + bilangan2;
    hasilKurang = bilangan1 - bilangan2;
    hasilKali = bilangan1 * bilangan2;
    hasilBagi = bilangan1 / bilangan2;
    
    cout << " Hasil penjumlahan : " << hasilTambah << endl;
    cout << " Hasil Pengurangan : " << hasilKurang << endl;
    cout << " Hasil perkalian : " << hasilKali << endl;
    cout << " Hasil pembagian : " << hasilBagi << endl;
    
    return 0;
}