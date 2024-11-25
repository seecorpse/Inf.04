#include <iostream>
#include <string>

std::string sprawdzPlec(const std::string& pesel) {
    if (pesel[9] % 2 == 0) {
        return "Kobieta";
    }
    else {
        return "Mężczyzna";
    }
}

bool sprawdzSumeKontrolna(const std::string& pesel) {
    int wagi[] = { 1, 3, 7, 9, 1, 3, 7, 9, 1, 3 };
    int suma = 0;

    for (int i = 0; i < 10; ++i) {
        suma += (pesel[i] - '0') * wagi[i];
    }

    int M = suma % 10;
    int R = (M == 0) ? 0 : 10 - M;

    return R == (pesel[10] - '0');
}

int main() {
    std::string pesel;
    std::cout << "Podaj numer PESEL (11 cyfr): ";
    std::cin >> pesel;
    if (pesel.length() != 11) {
        std::cerr << "Błędna długość numeru PESEL. Numer powinien mieć dokładnie 11 cyfr." << std::endl;
        return 1;
    }
    std::string plec = sprawdzPlec(pesel);
    std::cout << "Płeć: " << plec << std::endl;
    if (sprawdzSumeKontrolna(pesel)) {
        std::cout << "Suma kontrolna jest zgodna." << std::endl;
    }
    else {
        std::cout << "Suma kontrolna jest niezgodna." << std::endl;
    }
    return 0;
}
