#include <iostream>
using namespace std;

int main() {
    int dec = 123;     
    int oct = 0173;         
    int hex = 0x7B;         
    int bin = 0b01111011;

    auto a = 321;            
    auto b = 321L;
    auto c = 321LL;
    auto d = 321U;
    auto e = 321UL;
    auto f = 321ULL;

    cout << dec << " " << oct << " " << hex << " " << bin << endl;
    cout << a << " " << b << " " << c << endl;
    cout << d << " " << e << " " << f << endl;
    return 0;
}