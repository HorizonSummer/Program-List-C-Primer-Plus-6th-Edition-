#include<iostream>
double Lightyear_to_astronomical_units(double light_year);

int main()
{
    using std::cout;
    using std::cin;
    double light_year;
    cout << "Enter the number of light years: ";
    cin >> light_year;
    cout << light_year << " light years = ";
    cout << Lightyear_to_astronomical_units(light_year) <<" astronomical units. \n";
}

double Lightyear_to_astronomical_units(double light_year){
    return light_year * 63240;
}