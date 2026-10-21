#include <iostream>
using namespace std;

namespace first {
    void show() {
        cout << "Hello World1!" << endl;
    }
}

namespace second {
    void show() {
        cout << "Hello World2!!" << endl;
    }
}

int main() {
    first::show();
    second::show();
}
