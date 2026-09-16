// Лабораторная работа 1. Вариант 70.
// Выполнил: Черниченко С., группа ПИ-53.
#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;
const double PI = 3.14159265358979;

// ===== Расчётные функции варианта =====
// Перевод градусов в радианы
double degToRad(double d) {
    return d * PI / 180.0;
}
// Перевод радиан в градусы: deg = rad * 180 / π
double radToDeg(double r) {
    return r * 180.0 / PI;
}

// ===== Главная функция: меню =====
int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int choice;
    double d;
    do {
        cout << "\n== Вариант 70: углы ==\n";
        cout << "1. Градусы -> радианы\n";
        cout << "2. Радианы -> градусы\n";
        cout << "0. Выход\n";
        cout << "Выберите пункт: ";
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "Введите угол в градусах: ";
            cin >> d;
            cout << "Угол в радианах = " << degToRad(d) << "\n";
            break;
	case 2:
	    cout << "Введите угол в радианах: ";
    	    cin >> d;
	    cout << "Угол в градусах = " << radToDeg(d) << "\n";
	    break;
        case 0:
            cout << "Работа завершена.\n";
            break;
        default:
            cout << "Такого пункта нет.\n";
        }
    } while (choice != 0);
    return 0;
}
