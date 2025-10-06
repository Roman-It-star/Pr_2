#include <iostream>
#include <string>
using namespace std;

bool isDigitsOnly(const string& s) {
	if (s.length() != 11) return false;
	for (char c : s) {
		if (!isdigit(c)) return false;
	}
	return true;
}

int calculateSnilsControl(const string& snils) {
	int sum = 0;
	for (int i = 0; i < 9; ++i) {
		int digit = snils[i] - '0';
		int weight = 9 - i;
		sum += digit * weight;
	}

	if (sum < 100) return sum;
	if (sum == 100 || sum == 101) return 0;

	int rem = sum % 101;
	return (rem == 100) ? 0 : rem;
}

bool isValidSnils(const string& snils) {
	if (!isDigitsOnly(snils)) return false;

	int expectedControl = calculateSnilsControl(snils);
	int actualControl = stoi(snils.substr(9, 2));

	return expectedControl == actualControl;
}


int main()
{
	system("chcp 1251");

	string snils;
	cout << "Введите номер СНИЛС (11 цифр без пробелов и дефисов): ";
	cin >> snils;

	if (isValidSnils(snils))
		cout << "Снилс валиден.\n";
	else
		cout << "Снилс НЕвалиден.\n";
	return 0;
}
