#include <iostream>
#include <string>
class Osoba {
private:
    int id;
    std::string imie;

public:
    static int liczbaInstancji;
    Osoba() : id(0), imie("") {
        liczbaInstancji++;
    }
    Osoba(int id, const std::string& imie) : id(id), imie(imie) {
        liczbaInstancji++;
    }
    Osoba(const Osoba& other) : id(other.id), imie(other.imie) {
        liczbaInstancji++;
    }
    void przywitajSie(const std::string& inneImie) const {
        if (imie.empty()) {
            std::cout << "Brak danych." << std::endl;
        }
        else {
            std::cout << "Czesc " << inneImie << ", mam na imie " << imie << "." << std::endl;
        }
    }
};
int Osoba::liczbaInstancji = 0;

int main() {
    Osoba osoba1;
    Osoba osoba2(1, "Jan");
    Osoba osoba3(osoba2);
    osoba1.przywitajSie("Anna");
    osoba2.przywitajSie("Anna");
    osoba3.przywitajSie("Piotr");
    std::cout << "Liczba instancji klasy Osoba: " << Osoba::liczbaInstancji << std::endl;
    return 0;
}
