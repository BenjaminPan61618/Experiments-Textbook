#include<iostream>
using namespace std;
int main() {
    int arr[10];
    int *ptr = arr;
    cout << "Enter 10 integers: ";
    for (int i = 0; i < 10; i++) {
        cin >> *(ptr + i);
    }
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (*(ptr + i) > *(ptr + j)) {
                int temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        cout << *(ptr + i) << " ";
    }
    return 0;
}
