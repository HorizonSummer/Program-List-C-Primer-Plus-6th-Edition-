#include <iostream>
int main(){
    using namespace std;

    int carrots = 25;

    cout << "i have ";
    cout << carrots;
    cout << " carrots.";
    cout << endl;
    carrots = carrots - 1;
    cout << "Crunch, crunch. Now I have " << carrots << " carrots."<< endl;
    return 0;
}