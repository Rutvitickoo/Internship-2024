#include<iostream>
using namespace std;
void add(int a,int b){
cout<<"the sum of"<<a<<"and "<<b<<"is"<<a+b;

}
void add (int a,int b,int c){
  cout<<"the sum of"<<a<<b<<"and "<<c<<"is"<<a+b+c;

}
int main(){
    int n1,n2 ;
    cout<<"enter first number";
    cin>>n1;
    cout<<"enter second number";
    cin>>n2;
    add(n1,n2);
    int n3,n4,n5;
    cout<<"enter third number";
    cin>>n3;
    cout<<"enter fourth number";
    cin>>n4;
    cout<<"enter five number";
    cin>>n5;
    add(n3,n4,n5);
    return 0;
}

//define a no. of functions with same function name but they perform differently according to the arguments passed
//
