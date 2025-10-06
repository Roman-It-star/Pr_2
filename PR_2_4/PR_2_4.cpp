#include <iostream>
#include <cmath>
using namespace std;

int main() {
    system("chcp 1251");

    double x, y, r;
    int totalScore = 0;
    int shots = 0;

    while (totalScore < 50) {
        cout << "Выстрел #" << shots + 1 << " — введите координаты (x и y): ";
        cin >> x >> y;

        r = sqrt(x * x + y * y);
        int score = 0;
        if (r <= 1) score = 10;
        else if (r <= 3) score = 5;
        else if (r <= 5) score = 2;
        else score = 0;

        cout << "Очки за выстрел: " << score << "\n\n";
        totalScore += score;
        shots++;
    }

    cout << "?? Игра окончена!\n";
    cout << "Всего выстрелов: " << shots << "\n";
    cout << "Набрано очков: " << totalScore << "\n";

    if (totalScore >= 80)
        cout << "Уровень: Снайпер\n";
    else if (totalScore >= 60)
        cout << "Уровень: Стрелок\n";
    else
        cout << "Уровень: Новичок\n";

    return 0;
}
