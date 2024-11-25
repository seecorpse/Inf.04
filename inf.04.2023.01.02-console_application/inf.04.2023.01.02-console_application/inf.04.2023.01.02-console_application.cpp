#include <iostream>
#include <string>

class Notatka {
private:
    static int licznikNotatek;
    int id;
    std::string tytul;
    std::string tresc;

protected:
    Notatka() = default;

public:
    Notatka(const std::string& tytul, const std::string& tresc)
        : tytul(tytul), tresc(tresc) {
        licznikNotatek++;
        id = licznikNotatek;
    }
    void wyswietlNotatke() const {
        std::cout << "Tytuł: " << tytul << "\nTreść: " << tresc << std::endl;
    }
    void diagnostyka() const {
        std::cout << "ID: " << id << "; Tytuł: " << tytul << "; Treść: " << tresc << "; Licznik: " << licznikNotatek << std::endl;
    }
};
int Notatka::licznikNotatek = 0;

int main() {
    Notatka notatka1("Zakupy", "Kup mleko, chleb, i masło.");
    Notatka notatka2("Spotkanie", "Spotkanie z klientem o 14:00.");
    std::cout << "\nNotatka 1:" << std::endl;
    notatka1.wyswietlNotatke();
    notatka1.diagnostyka();
    std::cout << "\nNotatka 2:" << std::endl;
    notatka2.wyswietlNotatke();
    notatka2.diagnostyka();
    return 0;
}
