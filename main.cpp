#include <iostream>
using namespace std;

int main()
{
    cout << "������� 2 �������";
    setlocale(0, "ru");
    int days, hours, minutes, seconds;
    cout << "������� ���������� ����: ";
    cin >> days;
    cout << "������� ���������� �����: ";
    cin >> hours;
    cout << "������� ���������� �����: ";
    cin >> minutes;
    cout << "������� ���������� ������: ";
    cin >> seconds;

    int totalSeconds = days * 86400 + hours * 3600 + minutes * 60 + seconds;
    cout << "����� ���������� ������: " << totalSeconds << endl;
}
