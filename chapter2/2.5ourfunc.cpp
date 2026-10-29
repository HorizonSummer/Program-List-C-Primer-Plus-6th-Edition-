#include <iostream>
void simon(int); 

int main(){
    using namespace std;
    simon(3);
    cout << "pick an inteqer:"; 
    int count;
    cin >> count;
    simon(count);   // call it again
    cout << "Done!" << endl;
    return 0;
}

void simon(int n){  //define the simon() function
    using namespace std;
    cout<<"simon says touch your toes "<< n <<" times."<<endl;
    //void functions don't need return statements
}

