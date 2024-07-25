#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int number = 0;
    int value;
    cout << "Oyun basladi, saymaya baslayabilirsin." << endl;

    while (true) {

        cin >> value;
        if (value == number + 1) {
            number++;
            cout << "Dogru sayi girdiniz" << endl;
        } else cout << "Girmeniz gereken sayi: " << (number + 1) << endl;
    }
}