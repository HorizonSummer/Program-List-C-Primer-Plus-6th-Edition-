#include <iostream>
int calculatemonth(int);
int main()
{
    using std::cout;
    using std::cin;
    int age;
    cout <<"Enter your age ：\n";
    cin >> age;
    int month = calculatemonth(age);
    cout << "Your months are " << month <<"\n";
}
int calculatemonth(int age){
    return age*12;
}