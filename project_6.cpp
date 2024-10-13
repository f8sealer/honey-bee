#include <iostream> //I can't push the whole console application for some reason, so here's its code.
#include <windows.h> //Change for commit

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int x;
    cout << "¬вед≥ть к≥льк≥сть навчальних завдань: ";
    cin >> x;

    if (x < 10 || x > 40) {
        cout << "„исло повинно бути в д≥апазон≥ в≥д 10 до 40" << endl;
        return 0;
    }

    if (x >= 10 && x < 20) {
        switch (x) {
        case 10: cout << "дес€ть "; break;
        case 11: cout << "одинадц€ть "; break;
        case 12: cout << "дванадц€ть "; break;
        case 13: cout << "тринадц€ть "; break;
        case 14: cout << "чотирнадц€ть "; break;
        case 15: cout << "п'€тнадц€ть "; break;
        case 16: cout << "ш≥стнадц€ть "; break;
        case 17: cout << "с≥мнадц€ть "; break;
        case 18: cout << "в≥с≥мнадц€ть "; break;
        case 19: cout << "дев'€тнадц€ть "; break;
        }
        cout << "навчальних завдань" << endl;
    }
    else {
        switch (x / 10) {
        case 2: cout << "двадц€ть "; break;
        case 3: cout << "тридц€ть "; break;
        case 4: cout << "сорок "; break;
        }

        switch (x % 10) {
        case 0: cout << "навчальних завдань"; break;
        case 1: cout << "одне навчальне завданн€"; break;
        case 2: cout << "два навчальних завданн€"; break;
        case 3: cout << "три навчальних завданн€"; break;
        case 4: cout << "чотири навчальних завданн€"; break;
        case 5: cout << "п'€ть навчальних завдань"; break;
        case 6: cout << "ш≥сть навчальних завдань"; break;
        case 7: cout << "с≥м навчальних завдань"; break;
        case 8: cout << "в≥с≥м навчальних завдань"; break;
        case 9: cout << "дев'€ть навчальних завдань"; break;
        }
        cout << endl;
    } 

    return 0;
}
