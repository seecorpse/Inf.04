#include <iostream>
#include <string>

class Film {
protected:
    std::string tytul;
    int liczbaWypozyczen;

public:
    Film() : tytul(""), liczbaWypozyczen(0) {}

    void ustawTytul(const std::string& nowyTytul) {
        if (nowyTytul.length() <= 20) {
            tytul = nowyTytul;
        }
        else {
            std::cerr << "Tytul nie moze miec wiecej niz 20 znakow." << std::endl;
        }
    }
    std::string pobierzTytul() const {
        return tytul;
    }
    int pobierzLiczbeWypozyczen() const {
        return liczbaWypozyczen;
    }
    void inkrementujWypozyczenia() {
        liczbaWypozyczen++;
    }
};

int main() {
    Film film;
    std::cout << "Poczatkowe dane filmu:" << std::endl;
    std::cout << "Tytul: " << film.pobierzTytul() << std::endl;
    std::cout << "Liczba wypozyczen: " << film.pobierzLiczbeWypozyczen() << std::endl;
    film.ustawTytul("Titanic");
    std::cout << "\nPo ustawieniu tytulu:" << std::endl;
    std::cout << "Tytul: " << film.pobierzTytul() << std::endl;
    std::cout << "\nTytul filmu: " << film.pobierzTytul() << std::endl;
    std::cout << "\nLiczba wypozyczen przed inkrementacja: " << film.pobierzLiczbeWypozyczen() << std::endl;
    film.inkrementujWypozyczenia();
    std::cout << "Liczba wypozyczen po inkrementacji: " << film.pobierzLiczbeWypozyczen() << std::endl;

    return 0;
}
