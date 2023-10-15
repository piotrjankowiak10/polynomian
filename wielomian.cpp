#include "wielomian.h"
#include <vector>
#include <iostream>
using namespace std;



vector<int> dodawanie(const vector<int>& vec_1, const vector<int>& vec_2) {
	int stopien01 = vec_1.size() - 1;
	int stopien02 = vec_2.size() - 1;
	int stopien_val = max(stopien01, stopien02);
	vector<int> wynik(stopien_val + 1, 0);

	for (int i = 0; i <= stopien01; i++) {
		wynik[i] += vec_2[i];
	}

	for (int i = 0; i <= stopien02; i++) {
		wynik[i] += vec_2[i];
	}

	return wynik;
}

vector<int> odejmowanie(const vector<int>& vec_1, const vector<int>& vec_2) {
	int stopien01 = vec_1.size() - 1;
	int stopien02 = vec_2.size() - 1;
	int stopien_val = max(stopien01, stopien02);
	vector<int> wynik(stopien_val + 1, 0);

	for (int i = 0; i <= stopien01; i++) {
		wynik[i] += vec_2[i];
	}

	for (int i = 0; i <= stopien02; i++) {
		wynik[i] -= vec_2[i];
	}

	return wynik;
}


vector<int> mnozenie(const vector<int>& vec_1, const vector<int>& vec_2) {
	int stopien01 = vec_1.size() - 1;
	int stopien02 = vec_2.size() - 1;
	int stopien_val = stopien01 + stopien02;
	vector<int> wynik(stopien_val + 1, 0);

	for (int i = 0; i <= stopien01; i++) {
		for (int j = 0; j <= stopien02; j++) {
			wynik[i + j] += vec_1[i] * vec_2[j];
		}
	}

	return wynik;
}


void stopnie() {
    int val_1;
    vector<int> vec_1;
    cout << "Podaj najwieksza potege pierwszego wielomianu: ";
    cin >> val_1;
    cout << "Podaj wspolczynniki pierwszego wielomianu, po kazdym wspolczynniku kliknij enter: " << endl;
    for (int i = 0; i < val_1 + 1; i++) {
        int element;
        cin >> element;
        vec_1.push_back(element);
    }

    int val_2;
    vector<int> vec_2;
    cout << "Podaj najwieksza potege drugiego wielomianu: ";
    cin >> val_2;
    cout << "Podaj wspolczynniki drugiego wielomianu, po kazdym wspolczynniku kliknij enter: " << endl;
    for (int i = 0; i < val_2 + 1; i++) {
        int element;
        cin >> element;
        vec_2.push_back(element);
    }

    cout << "Twój pierwszy wielomian jest " << vec_1.size() - 1 << " stopnia" << endl;
    cout << "Twój drugi wielomian jest " << vec_2.size() - 1 << " stopnia" << endl;
}




void wyswietlWynik(const vector<int>& wynik) {
    if (wynik.at(0) != 0) {
        cout << wynik.at(0) << "x^" << wynik.size() - 1 << " ";
    }

    int potega;
    for (int i = 1; i < wynik.size() - 1; i++) {
        potega = wynik.size() - 1 - i;
        if (wynik.at(i) > 0) {
            cout << "+ ";
        }
        if (wynik.at(i) != 0) {
            cout << wynik.at(i) << "x^" << potega << " ";
        }
    }

    if (wynik.at(wynik.size() - 1) > 0) {
        cout << "+ ";
    }

    if (wynik.at(wynik.size() - 1) != 0) {
        cout << wynik.at(wynik.size() - 1);
    }

    bool zmienna = false;
    for (int i = 0; i < wynik.size(); i++) {
        if (wynik.at(i) != 0) {
            zmienna = true;
            break;
        }
    }

    if (!zmienna) {
        cout << "0";
    }
}

