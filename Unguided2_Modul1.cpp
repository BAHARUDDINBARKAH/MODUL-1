#include <iostream>
#include <string>
using namespace std;

class Warga {
public:
    string name;
    string address;
    int age;

    // Constructor untuk inisialisasi objek Warga
    Warga(string n, string addr, int a) : name(n), address(addr), age(a) {}

    // Metode untuk menampilkan informasi warga
    void displayInfo() {
        cout << "Nama   : " << name << endl;
        cout << "Alamat : " << address << endl;
        cout << "Umur   : " << age << endl;
    }
};

int main() {
    // Membuat objek Warga menggunakan constructor
    Warga wrg1("Rudy", "Jakarta", 19);
    Warga wrg2("Barkah", "Yogyakarta", 20);

    cout << "## Warga 1 ##" << endl;
    wrg1.displayInfo();

    cout << "\n## Warga 2 ##" << endl;
    wrg2.displayInfo();

    return 0;
}