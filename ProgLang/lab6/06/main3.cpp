#include <iostream>
#include <string>
#include <chrono>
#include <utility>
using namespace std;

int main() {
    string a(100000, 'a');
    string b(100000, 'b');
    auto start = chrono::high_resolution_clock::now();

    for (int i = 0; i < 1000000; i++) {
        string c(move(a));
        a = move(b);
        b = move(c);
    }
    cout << a[0] << b[0] << endl;

    auto end = chrono::high_resolution_clock::now();
    cout << "Operating hours: " << chrono::duration<double>(end - start).count() << endl;
}