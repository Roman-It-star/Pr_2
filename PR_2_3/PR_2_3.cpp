#include <iostream>
using namespace std;

int main() {
    system("chcp 1251");

    int coins[] = { 1000, 500, 200, 100, 50, 10, 1 };
    int amount;

    cout << "Введите сумму (в копейках): ";
    cin >> amount;

    cout << "Размен монетами:\n";

    for (int i = 0; i < 7; i++) {
        int count = amount / coins[i];
        if (count > 0) {
            cout << coins[i] << " коп. x " << count << endl;
            amount %= coins[i];
        }
    }

    return 0;
}
