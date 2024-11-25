#include <iostream>
#include <cstdlib>
#include <ctime> 

const int ROZMIAR_TABLICY = 100;

class SortowanieTablicy {
public:
    void generujLiczbyLosowe(int tablica[]);
    void sortujRosnaco(int tablica[]);
    void wyswietlTablice(const int tablica[]);
};

void SortowanieTablicy::generujLiczbyLosowe(int tablica[]) {
    srand(static_cast<unsigned int>(time(0)));
    for (int i = 0; i < ROZMIAR_TABLICY; i++) {
        tablica[i] = rand() % 1000;
    }
}

void SortowanieTablicy::sortujRosnaco(int tablica[]) {
    for (int i = 0; i < ROZMIAR_TABLICY - 1; i++) {
        for (int j = 0; j < ROZMIAR_TABLICY - i - 1; j++) {
            if (tablica[j] > tablica[j + 1]) {
                int temp = tablica[j];
                tablica[j] = tablica[j + 1];
                tablica[j + 1] = temp;
            }
        }
    }
}

void SortowanieTablicy::wyswietlTablice(const int tablica[]) {
    std::cout << "Posortowana tablica: ";
    for (int i = 0; i < ROZMIAR_TABLICY; i++) {
        std::cout << tablica[i];
        if (i < ROZMIAR_TABLICY - 1) {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;
}

int main() {
    SortowanieTablicy sortowanie;
    int tablica[ROZMIAR_TABLICY];
    sortowanie.generujLiczbyLosowe(tablica);
    std::cout << "Tablica przed sortowaniem: ";
    sortowanie.wyswietlTablice(tablica);
    sortowanie.sortujRosnaco(tablica);
    sortowanie.wyswietlTablice(tablica);

    return 0;
}
