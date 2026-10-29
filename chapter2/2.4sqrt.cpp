#include <iostream>
#include <cmath>
int main(){
     //ormath.h
    using namespace std; 
    
    double area;
    cout << "Enter the floor area, in square feet, of your home: ";
    cin >> area; 
    double side;
    side = sqrt(area);
    cout <<"That's the equivalent of a sgquare " << side
         << " feet to the side." << endl;
    cout<<"How fascinating!"<<endl;
}
