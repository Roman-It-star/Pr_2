#include <iostream>
#include <cmath>
using namespace std;

int main() {
    system("chcp 1251");

    double x, y, r;
    int totalScore = 0;
    int shots = 0;

    while (totalScore < 50) {
        cout << "������� #" << shots + 1 << " � ������� ���������� (x � y): ";
        cin >> x >> y;

        r = sqrt(x * x + y * y);
        int score = 0;
        if (r <= 1) score = 10;
        else if (r <= 3) score = 5;
        else if (r <= 5) score = 2;
        else score = 0;

        cout << "���� �� �������: " << score << "\n\n";
        totalScore += score;
        shots++;
    }

    cout << "?? ���� ��������!\n";
    cout << "����� ���������: " << shots << "\n";
    cout << "������� �����: " << totalScore << "\n";

    if (totalScore >= 80)
        cout << "�������: �������\n";
    else if (totalScore >= 60)
        cout << "�������: �������\n";
    else
        cout << "�������: �������\n";

    return 0;
}
