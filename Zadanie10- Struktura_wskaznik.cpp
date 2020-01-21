#include <iostream>

using namespace std;

struct DataUrodzenia {
	short rok;
	short dzien;
	short miesiac;
}du;

struct Osoba {
	char imie[15];
	char nazwisko[30];
	char adres[90];
	DataUrodzenia dur;
}os;

int main() {
	short n, * wsk_n = &n;
	//int  n, * wsk_n = &n;
	//	int const wtab = n;

	cout << "Ile osob ma sie znajodwac w strukturze: ";
	cin >> n;

	Osoba* pamiec_osoby = new struct Osoba[*wsk_n];
	struct Osoba os[5];
	//struct DataUrodzenia du[5];

	system("cls");
	cout << "Podaj dane personalne: " << endl;

	for (int i = 0; i < n; i++) {
		cout << "Podaj imie: ";
		cin >> os[i].imie;
		cout << "Podaj nazwisko: ";
		cin >> os[i].nazwisko;
		cout << "Podaj adres: ";
		cin >> os[i].adres;
		cout << "Podaj rok urodzenia:";
		cin >> os[i].dur.rok;
		cout << "Podaj dzien urodzenia:";
		cin >> os[i].dur.dzien;
		cout << "Podaj miesiac urodzenia:";
		cin >> os[i].dur.miesiac;
		system("cls");
	}

	cout << "Podano nastepujace dane personalne: " << endl;
	for (int i = 0; i < n; i++)
		cout << os[i].imie << " " << os[i].nazwisko << ", zamieszkaly w: " << os[i].adres << ". "
		<< "Urodzony " << os[i].dur.rok << "-" << os[i].dur.miesiac << "-" << os[i].dur.dzien << "." << endl;

	delete[] pamiec_osoby;
	return 0;
}