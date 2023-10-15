#include <iostream>
#include "wielomian.h"

using namespace std;

int main()
{

    vector<int> vec_1;
	int val_1;
	cout << "Podaj najwieksza potege pierwszego wielomianu: ";
	cin >> val_1;
	cout << "Podaj wspolczynniki pierwszego wielomianu, po kazdym wspolczynniku kliknij enter: " << endl;
	for (int i = 0; i < val_1 + 1; i++)
	{
		int element;
		cin >> element;
		vec_1.push_back(element);
	}


	vector <int> vec_2;
	cout << "Podaj najwieksza potege drugiego wielomianu: ";
	int val_2;
	cin >> val_2;
	cout << "Podaj wspolczynniki drugiego wielomianu, po kazdym wspolczynniku kliknij enter: " << endl;
	for (int i = 0; i < val_2 + 1; i++)
	{
		int element;
		cin >> element;
		vec_2.push_back(element);
	}

	vector<int> wynik1 = mnozenie(vec_1, vec_2);
    void wyswietlWynik(const vector<int>& wynik1);

	vector<int> wynik2 = odejmowanie(vec_1, vec_2);
    void wyswietlWynik(const vector<int>& wynik2);

    vector<int> wynik3 = dodawanie(vec_1, vec_2);
    void wyswietlWynik(const vector<int>& wynik3);

    stopnie();

    return 0;
}
