#include <iostream>
int obliczNWD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int a, b;
    std::cout << "Podaj dwie liczby calkowite dodatnie: ";
    std::cin >> a >> b;
    if (a <= 0 || b <= 0) {
        std::cout << "Podane liczby musza byc dodatnie.\n";
        return 1;
    }
    int nwd = obliczNWD(a, b);
    std::cout << "Najwiekszy wspolny dzielnik (" << a << ", " << b << ") to: " << nwd << std::endl;
    return 0;
}
