
#include<iostream>
void simon(int); 
int main(){
    using namespace std;
    simon(3);
    cout << "pick an inteqer:"; 
    int count;
    cin >> count;
    simon(count);
    //callitagain
    cout << "Done!" << endl;

}

void simon(int n){//define the simon() function
    using namespace std;
    cout<<"simon says touch your toes "<<n<<" times."<<endl;
    //voidfunctionsdon'tneedreturnstatements
}

