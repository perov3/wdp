#include <iostream>

using namespace std;

string reversedText(string a) {
    string reversedResult = a;
    for (int i = 0, j = a.length() - 1; i < a.length(); i++, j--) {
        reversedResult[i] = a[j];
    }
    return reversedResult;
}

int main()
{
    string napis;
    cout << "Enter some string" << endl;
    cin >> napis;
    cout << reversedText(napis);
}