#include <iostream>
using namespace std;

int main()
{
    cout << "–ешение 2 задание";
    setlocale(0, "ru");
    int days, hours, minutes, seconds;
    cout << "¬ведите количество дней: ";
    cin >> days;
    cout << "¬ведите количество часов: ";
    cin >> hours;
    cout << "¬ведите количество минут: ";
    cin >> minutes;
    cout << "¬ведите количество секунд: ";
    cin >> seconds;

    int totalSeconds = days * 86400 + hours * 3600 + minutes * 60 + seconds;
    cout << "ќбщее количество секунд: " << totalSeconds << endl;
}
