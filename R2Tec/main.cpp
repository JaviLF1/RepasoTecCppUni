

#include <iostream>


bool state = true;

/*int main() {
    int a = 2147483647;          // el mayor int de 32 bits
    std::cout << a + 1 << '\n';

    unsigned int u = 1;
    int i = -1;
    std::cout << (i < u) << '\n';
}*/

int main() {
    std::cout << sizeof(char) << ' '
        << sizeof(short) << ' '
        << sizeof(int) << ' '
        << sizeof(long) << ' '
        << sizeof(double) << '\n';
}