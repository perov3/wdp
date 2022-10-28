#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Wpisz rok:" << endl;
    cin >> a;
    if (a % 4 == 0, a % 100 != 0, a % 400 == 0) {
        cout << "Rok jest przestepny.";
    }
    else if (a % 4 == 0, a % 100 != 0, a % 400 != 0) {
        cout << "Rok nie jest przestepny.";
    }
    else if (a % 4 != 0) {
        cout << "Rok nie jest przestepny.";
    }
}