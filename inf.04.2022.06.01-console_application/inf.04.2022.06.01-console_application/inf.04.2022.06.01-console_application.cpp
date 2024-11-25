#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class ArraySearcher {
private:
	int tablica[50];
public:
	ArraySearcher() {
		srand(time(0));
		wypelnijTablice();
	}
	void wypelnijTablice() {
		for (int i = 0; i < 50; i++) {
			tablica[i] = rand() % 100 + 1;
		}
	}
	int przeszukajTablice(int wartosc) {
		for (int i = 0; i < 50; i++) {
			if (tablica[i] == wartosc) {
				return i;
			}
		}
		return -1;
	}
	void wyswwietlTablice() const {
		cout << "Zawartość tablicy: ";
		for (int i = 0; i < 50; i++) {
			cout << tablica[i];
			if (i < 49) cout << ", ";
		}
		cout << endl;
	}
};
int main()
{
	ArraySearcher searcher;
	int wartoscDoWyszukania;
	searcher.wypelnijTablice();
	cout << "Podaj liczbę do wyszukania w tablicy (zakres 1-100): ";
	cin >> wartoscDoWyszukania;
	int indeks = searcher.przeszukajTablice(wartoscDoWyszukania);
	if (indeks != -1) {
		cout << "Liczba " << wartoscDoWyszukania << " znaleziona na indeksie: " << indeks << endl;
	}
	else{
		cout << "Liczba " << wartoscDoWyszukania << " nie wystepuje w tablicy." << endl;
	}
	return 0;
}