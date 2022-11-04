#include <iostream>
using namespace std;
int main()
{
    int i;
    for (i = 0; i < 0; i += 2);
    {
        cout << i << ", ";
    }
    while (i <= 98)
    {
        i += 2;
        cout << i << ", ";

    }
}