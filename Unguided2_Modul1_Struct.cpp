#include <iostream>
using namespace std;

struct Warga
{
    string name;
    string address;
    int age;  
};

int main() {
    Warga wrg1 = {"Rudy", "Jakarta", 19};
    Warga wrg2 = {"Barkah", "Yogyakarta", 20};

    cout << "## Warga 1 ##" << endl;
    cout << " Nama : " << wrg1.name << endl;
    cout << " Alamat : " << wrg1.address << endl;
    cout << " Umur : " << wrg1.age << endl;

    cout << "## Warga 2 ##" << endl;
    cout << " Nama : " << wrg2.name << endl;
    cout << " Alamat : " << wrg2.address << endl;
    cout << " Umur : " << wrg2.age << endl;

    return 0;
}