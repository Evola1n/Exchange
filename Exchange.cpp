

#include <iostream>
#include <cmath>
#include <windows.h>
#include <iomanip>

using namespace std;
int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    setlocale(LC_CTYPE, "");
    float money;
    int option;
    int x = 1;
    while (x == 1) {


        SetConsoleTextAttribute(hConsole, 15);
        cout << "Выберите валюту которую хотите конвертировать ( USD CNY UAH PLN EUR GBP ) ";
        cin >> option;

        switch (option) {
        case 1:
            SetConsoleTextAttribute(hConsole, 15);
            cout << endl << "Введите количество денег для конвертации: ";
            cin >> money;
            SetConsoleTextAttribute(hConsole, 6);
            cout << endl << money <<" USD to UAH: " << money * 37.4;
            cout << endl << money <<" USD to PLN: " << money * 4.35;
            cout << endl << money <<" USD to EUR: " << money * 0.93;
            cout << endl << money <<" USD to CNY: " << money * 7.29;
            cout << endl << money <<" USD to GBP: " << money * 0.79 << endl;
            break;

        case 2:
            SetConsoleTextAttribute(hConsole, 15);
            cout << endl << "Введите количество денег для конвертации: ";
            cin >> money;
            SetConsoleTextAttribute(hConsole, 6);
            cout << endl << money << " CNY to UAH: " << money * 5.06;
            cout << endl << money << " CNY to PLN: " << money * 0.597;
            cout << endl << money << " CNY to EUR: " << money * 0.12;
            cout << endl << money << " CNY to GBP: " << money * 0.06;
            cout << endl << money << " CNY to USD: " << money * 0.13 << endl;
            break;
        case 3:
            SetConsoleTextAttribute(hConsole, 15);
            cout << endl << "Введите количество денег для конвертации: ";
            cin >> money;
            SetConsoleTextAttribute(hConsole, 6);
            cout << endl << money << " UAH to PLN: " << money / 11.8;
            cout << endl << money << " UAH to EUR: " << money / 40.5;
            cout << endl << money << " UAH to CNY: " << money / 5.06;
            cout << endl << money << " UAH to GBP: " << money / 45.7;
            cout << endl << money << " UAH to USD: " << money / 37.4 << endl;

            break;
        case 4:
            SetConsoleTextAttribute(hConsole, 15);
            cout << endl << "Введите количество денег для конвертации: ";
            cin >> money;
            SetConsoleTextAttribute(hConsole, 6);
            cout << endl << money << " PLN to UAH: " << money * 8.47;
            cout << endl << money << " PLN to EUR: " << money * 0.215;
            cout << endl << money << " PLN to CNY: " << money * 1.67;
            cout << endl << money << " PLN to GBP: " << money * 0.18;
            cout << endl << money << " PLN to USD: " << money * 0.229 << endl;
            break;
        case 5:
            SetConsoleTextAttribute(hConsole, 15);
            cout << endl << "Введите количество денег для конвертации: ";
            cin >> money;
            SetConsoleTextAttribute(hConsole, 6);
            cout << endl << money << " EUR to UAH: " << money * 40.5;
            cout << endl << money << " EUR to PLN: " << money * 4.655;
            cout << endl << money << " EUR to CNY: " << money * 7.78;
            cout << endl << money << " EUR to GBP: " << money * 0.85;
            cout << endl << money << " EUR to USD: " << money * 1.06 << endl;
            break;
        case 6:
            SetConsoleTextAttribute(hConsole, 15);
            cout << endl << "Введите количество денег для конвертации: ";
            cin >> money;
            SetConsoleTextAttribute(hConsole, 6);
            cout << endl << money << " GBP to UAH: " << money * 45.7;
            cout << endl << money << " GBP to PLN: " << money * 5.08;
            cout << endl << money << " GBP to EUR: " << money * 1.1;
            cout << endl << money << " GBP to CNY: " << money * 11.43;
            cout << endl << money << " GBP to USD: " << money * 1.18 << endl;
            break;
        default:
            SetConsoleTextAttribute(hConsole, 4);
            cout << endl << "Вы выбрали неправильную валюту" << endl;

        }
        SetConsoleTextAttribute(hConsole, 15);
        cout << endl << "Вы хотите начать заново? ";
        SetConsoleTextAttribute(hConsole, 2);
        cout << "Да(1)";
        SetConsoleTextAttribute(hConsole, 4);
        cout << " Нет(0): ";
        SetConsoleTextAttribute(hConsole, 7);
        cin >> x;
        cout << endl;
        if (x == 0) {
            return 0;
        }
        else{
        x = 1;
        }

        while (x !=( 1 || 0)) {
            SetConsoleTextAttribute(hConsole, 4);
            cout << "Вы ввели неправильную цифру" << endl;
            SetConsoleTextAttribute(hConsole, 15);
            cout << endl << "Вы хотите начать заново? ";
            SetConsoleTextAttribute(hConsole, 2);
            cout << "Да(1)";
            SetConsoleTextAttribute(hConsole, 4);
            cout << " Нет(0): ";
            SetConsoleTextAttribute(hConsole, 7);
            cin >> x;
            cout << endl;
            if (x == 0) {
                return 0;
            }
            else {
                cout << "";
            }
        }

        

    }
    return 0;
}