#include <iostream>
using namespace std;

class Sorter{
private:
	int tablica[10];
	int znajdzIndeksMaksymalny(int start) {
		int maxIndeks = start;
		for (int i = start + 1; i < 10; i++) {
			if (tablica[i] > tablica[maxIndeks]) {
				maxIndeks = i;
			}
		}
		return maxIndeks;
	}
public:
	void wczytajTablice() {
		cout << "Podaj 10 liczb całkowitych:\n";
		for (int i = 0; i < 10; i++) {
			cout << "Liczba " << i + 1 << ": ";
			cin >> tablica[i];
		}
	}
	void sortujMalejaco() {
		for (int i = 0; i < 10 - 1; i++) {
			int maxIndeks = znajdzIndeksMaksymalny(i);
			if (maxIndeks != i) {
				int temp = tablica[i];
				tablica[i] = tablica[maxIndeks];
				tablica[maxIndeks] = temp;
			}
		}
	}
	void wyswietlTablice() const {
		cout << "Tablica po posortowaniu malejąco:\n:";
		for (int i = 0; i < 10; i++) {
			cout << tablica[i] << " ";
		}
		cout << endl;
	}
};
int main()
{
	Sorter sorter;
	sorter.wczytajTablice();
	sorter.sortujMalejaco();
	sorter.wyswietlTablice();
}