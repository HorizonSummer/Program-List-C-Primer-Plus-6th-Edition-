#include<iostream>
#include<climits>

int main()
{
    using namespace std;
    cout<<"int is "<<sizeof(int)<<" bytes"<<endl;
    cout<<"short is "<<sizeof(short)<<" bytes"<<endl;
    cout<<"long is "<<sizeof(long)<<" bytes"<<endl;
    cout<<"long long is "<<sizeof(long long)<<" bytes"<<endl<<endl;

    cout<<"Maximum values: "<<endl;
    cout<<"int: "<<INT_MAX<<endl;
    cout<<"short: "<<SHRT_MAX<<endl;
    cout<<"long: "<<LONG_MAX<<endl;
    cout<<"long long: "<<LLONG_MAX<<endl<<endl;

    cout<<"Minimum int value= "<<INT_MIN<<endl;
    cout<<"bits per Byte: "<<CHAR_BIT<<endl;

    return 0;
}