#include<iostream>
int Celsius_to_Fahrenheit(int);

int main()
{
    using std::cout;
    using std::cin;
    double Celsius;
    cout << "Please enter a Celsius value：";
    cin >> Celsius;
    cout << Celsius << " degrees Celsius is ";
    cout << Celsius_to_Fahrenheit(Celsius) <<" degrees Fahrenheit.\n";
}

int Celsius_to_Fahrenheit(int Celsius){
    return Celsius * 1.8 + 32;
}