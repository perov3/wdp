#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Wpisz cene produktu:" << endl;
	cin >> a;
	cout << "Wpisz cene sprzedazy:" << endl;
	cin >> b;
	int c = b - a;
	if (c > 0) {
		cout << "Zysk:" << c;
	}
	if (c < 0) {
		cout << "Strata:" << -c;
	}
	if (c == 0) {
		cout << "Brak zysku i straty.";
	}
}