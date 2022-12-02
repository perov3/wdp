#include <iostream>

using namespace std;

int second(int arg[], int length) {
    int largest, secondLargest;
    if (arg[1] > arg[0]) {
        largest = arg[1];
        secondLargest = arg[0];
    }
    else {
        largest = arg[0];
        secondLargest = arg[1];
    }
        for (int j = 2; j < length; j++) {
            if (largest < arg[j]) {
                secondLargest = largest;
                largest = arg[j];
            }
            else if (arg[j] > secondLargest && arg[j] < largest) {
                secondLargest = arg[j];
            }
        }
    return secondLargest;
}

int main()
{
    int arr[20];
    srand(time(NULL));

    int length = sizeof(arr) / sizeof(int);

    for (int i = 0; i < size(arr); i++) {
        arr[i] = rand() % 101;

        cout << arr[i] << " ";
    }

    cout << second(arr, length) << endl;

    return 0;
}

