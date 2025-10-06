#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool isSuperPrime(int number) {
    if (!isPrime(number)) return false;

    int count = 0;
    for (int i = 2; i <= number; ++i) {
        if (isPrime(i))
            ++count;
        if (i == number)
            break;
    }
    return isPrime(count);
}

int main()
{
    system("chcp 1251");
    int n;
    cout << "Введите число: ";
    cin >> n;

    if (isSuperPrime(n))
        cout << n << " - суперпростое число.\n";
    else
        cout << n << " - Не суперпростое число.\n";
    return 0;
}