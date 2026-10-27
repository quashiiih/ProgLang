#include <iostream>

int main() {
    int x = 1, y = 2, z = 3;
    z = z + 2 * ++x + 3 * y++;
    std::cout << x << " " << y << " " << z << std::endl;
    return 0;
}
