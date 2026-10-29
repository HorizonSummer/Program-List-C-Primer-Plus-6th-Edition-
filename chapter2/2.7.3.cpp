#include<iostream>
void mice();
void run();

int main()
{
    mice();
    mice();
    run();
    run();
}

void mice(){
    using std::cout;
    using std::cin;
    cout<<"Three blind mice\n";
}

void run(){
    using std::cout;
    using std::cin;
    cout<<"See how they run\n";
}