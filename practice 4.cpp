
#include<iostream>
using namespace std;
int main(){
    int apple_count(5);
    int orange_count(10);
    int fruit_count(apple_count + orange_count);

    int narrowing_conversion_functional(2.9);

    cout<<"apple count:"<<apple_count<<endl;
    cout<<"orange count:"<<orange_count<<endl;
    cout<<"fruit count:"<<fruit_count<<endl;
    cout<<"narrowing conversion:"
    << narrowing_conversion_functional<<endl;//will loose info
    return 0;
}
