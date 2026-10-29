#include <iostream>
int longtoyard(int);
int main()
{
    
    cout << "long is: ";
    int n_long;
    cin >> n_long;
    int yard = longtoyard(n_long);
    cout << n_long << " longs = ";
    cout << yard << " yards.";
}

int longtoyard(int n_long){
    return n_long*220;
}