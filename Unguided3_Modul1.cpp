#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> m;
    m["Baharuddin"] = 20;
    m["Barkah"] = 25;
    m["Pratama"] = 30;

    for (auto it = m.begin(); it != m.end(); ++it) {
        cout << it->first << " -> " << it->second << endl;
    }

    auto it = m.find("Barkah");
    if (it != m.end()) {
        cout << "Nilai untuk key 'Barkah': " << it->second << endl;
    } else {
        cout << "Key 'Barkah' tidak ditemukan" << endl;
    }

    return 0;
}