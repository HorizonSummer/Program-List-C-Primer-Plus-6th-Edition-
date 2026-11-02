#include<iostream>
void showTime(int, int);

int main()
{
    using std::cout;
    using std::cin;
    int hours, minutes;
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    showTime(hours,minutes);
}

void showTime(int hours, int minutes){
    using std::cout;
    cout << "Time: " << hours << ":" << minutes << "\n";
}