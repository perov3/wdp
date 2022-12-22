#include <iostream>
using namespace std;


//7.1
//int zad1(int argument[], int rozmiar) {
//	int suma=0;
//	for (int i = 0; i < rozmiar; i++) {
//		suma += argument[i];
//	}
//	return suma;
//}
//
//
//int main() {
//	int tab[20],size;
//	size = sizeof(tab) / sizeof(int);
//	srand(time(NULL));
//	for (int i = 0; i < size; i++) {
//		tab[i] = rand() % 101;
//		cout << tab[i] << ", ";
//	}
//	zad1(tab, size);
//	cout << endl << "suma:" << zad1(tab, size);
//}

//7.2

//int zad2(int argument[], int size) {
//	int counter=0;
//	for (int i = 0; i < size; i++) {
//		if (argument[i] % 2==0) {
//			counter++;
//		}
//	}
//	return counter;
//}
//
//int main() {
//	int tab[20],size;
//	srand(time(NULL));
//	size = sizeof(tab) / sizeof(int);
//	for (int i = 0; i < size; i++) {
//		tab[i] = rand() % 101;
//		cout << tab[i] << ", ";
//	}
//	zad2(tab, size);
//	cout << endl << "elementy parzyste:" << zad2(tab, size);
//}

//7.3
//int zad3(int argument[], int size) {
//	int wynik = argument[0];
//	for (int i = 1; i <= size; i++) {
//		if (argument[i] > wynik) {
//			wynik = argument[i];
//		}
//	}
//	return wynik;
//}
//
//int main() {
//	int tab[20], size;
//	srand(time(NULL));
//	size = sizeof(tab) / sizeof(int);
//	for (int i = 0; i < size; i++) {
//		tab[i] = rand() % 101;
//		cout << tab[i]<<", ";
//	}
//	zad3(tab, size);
//	cout << endl << "najwieksza liczba:" << zad3(tab, size);
//}

//6.1
//int main() {
//	int b[5] = { 1,2,3,4,5 };
//	for (int i = 0; i < 5; i++) {
//		cout << b[i]<<", ";
//	}
//}

//6.2
//int main() {
//	int parzyste[5] = { 2,4,6,8,10}, size;
//	size = sizeof(parzyste) / sizeof(int);
//	cout << "Length of an array:" << size;
//} 

//6.3
//int zad3(int argument[], int size) {
//	int suma=0;
//	for (int i = 0; i < size; i++) {
//		suma += argument[i];
//	}
//	return suma;
//}
//
//int main() {
//	int tab[20], size;
//	size = sizeof(tab) / sizeof(int);
//	srand(time(NULL));
//	for (int i = 0; i < size; i++) {
//		tab[i] = rand() % 101;
//		cout << tab[i] << ", ";
//	}
//	zad3(tab, size);
//	cout << endl << "suma:" << zad3(tab, size);
//}

//7.1
//int zad1(int argument[], int size) {
//	int suma = 0;
//	for (int i = 0; i < size; i++) {
//		suma += argument[i];
//	}
//	return suma;
//}
//
//int main() {
//	int tab[20], size;
//	srand(time(NULL));
//	size = sizeof(tab) / sizeof(int);
//	for (int i = 0; i < size; i++) {
//		tab[i] = rand() % 101;
//		cout << tab[i] << ", ";
//	}
//	zad1(tab, size);
//	cout << endl << "suma:" << zad1(tab, size);
//}

//7.2
//int zad2(int argument[], int size) {
//	int counter = 0;
//	for (int i = 0; i < size; i++) {
//		if (argument[i] % 2) {
//			counter++;
//		}
//	}
//	return counter;
//}
//
//int main() {
//	int tab[4], size;
//	srand(time(NULL));
//	size = sizeof(tab) / sizeof(int);
//	for (int i = 0; i < size; i++) {
//		tab[i] = rand() % 101;
//		cout << tab[i] << ", ";
//	}
//	zad2(tab, size);
//	cout << endl << "liczba elementow parzystych:" << zad2(tab, size);
//}

//7.3
//int zad3(int argument[],int size) {
//	int wynik=argument[0];
//	for (int i = 1; i < size; i++) {
//		if (argument[i] > wynik) {
//			wynik = argument[i];
//		}
//	}
//	return wynik;
//}
//
//int main() {
//	int tab[20], size;
//	srand(time(NULL));
//	size = sizeof(tab) / sizeof(int);
//	for (int i = 0; i < size; i++) {
//		tab[i] = rand() % 101;
//		cout << tab[i] << ", ";
//	}
//	zad3(tab, size);
//	cout << "najwieksza liczba:" << zad3(tab, size);
//}