#include <iostream> //I can't push the whole console application for some reason, so here's its code.
#include <windows.h> //Change for commit

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int x;
    cout << "������ ������� ���������� �������: ";
    cin >> x;

    if (x < 10 || x > 40) {
        cout << "����� ������� ���� � ������� �� 10 �� 40" << endl;
        return 0;
    }

    if (x >= 10 && x < 20) {
        switch (x) {
        case 10: cout << "������ "; break;
        case 11: cout << "���������� "; break;
        case 12: cout << "���������� "; break;
        case 13: cout << "���������� "; break;
        case 14: cout << "������������ "; break;
        case 15: cout << "�'��������� "; break;
        case 16: cout << "����������� "; break;
        case 17: cout << "��������� "; break;
        case 18: cout << "���������� "; break;
        case 19: cout << "���'��������� "; break;
        }
        cout << "���������� �������" << endl;
    }
    else {
        switch (x / 10) {
        case 2: cout << "�������� "; break;
        case 3: cout << "�������� "; break;
        case 4: cout << "����� "; break;
        }

        switch (x % 10) {
        case 0: cout << "���������� �������"; break;
        case 1: cout << "���� ��������� ��������"; break;
        case 2: cout << "��� ���������� ��������"; break;
        case 3: cout << "��� ���������� ��������"; break;
        case 4: cout << "������ ���������� ��������"; break;
        case 5: cout << "�'��� ���������� �������"; break;
        case 6: cout << "����� ���������� �������"; break;
        case 7: cout << "�� ���������� �������"; break;
        case 8: cout << "��� ���������� �������"; break;
        case 9: cout << "���'��� ���������� �������"; break;
        }
        cout << endl;
    } 

    return 0;
}
