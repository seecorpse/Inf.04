#include <iostream>
#include <cmath>
#include <vector>

const int N = 100;

void wyznaczLiczbyPierwsze(bool tablica[]) {
    for (int i = 2; i <= sqrt(N); i++) {
        if (tablica[i]) {
            for (int j = i * i; j <= N; j += i) {
                tablica[j] = false;
            }
        }
    }
}

void wyswietlLiczbyPierwsze(const bool tablica[]) {
    std::cout << "Liczby pierwsze w przedziale 2..100: ";
    bool pierwszy = true;
    for (int i = 2; i <= N; i++) {
        if (tablica[i]) {
            if (!pierwszy) {
                std::cout << ", ";
            }
            std::cout << i;
            pierwszy = false;
        }
    }
    std::cout << std::endl;
}

int main() {
    bool tablica[N + 1];
    for (int i = 2; i <= N; i++) {
        tablica[i] = true;
    }
    wyznaczLiczbyPierwsze(tablica);
    wyswietlLiczbyPierwsze(tablica);

    return 0;
}
