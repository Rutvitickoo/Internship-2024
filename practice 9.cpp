#include<iostream>
using namespace std;
void add(int a,int b){
cout<<"the sum of"<<a<<"and "<<b<<"is"<<a+b;

}
void sub(int a,int b){
cout<<"the sub of"<<a<<"and "<<b<<"is"<<a-b;


}
void div(int a,int b){
cout<<"the div of"<<a<<"and "<<b<<"is"<<a/b;
}
void mul(int a,int b){
cout<<"the mul of"<<a<<"and "<<b<<"is"<<a*b;

}
void rem(int a,int b){
cout<<"the rem of"<<a<<"and "<<b<<"is"<<a%b;
}


int main(){
    int n1,n2;
    cout<<"enter first number";
    cin>>n1;
    cout<<"enter second number";
    cin>>n2;
    add(n1,n2);
    sub(n1,n2);
    mul(n1,n2);
    div(n1,n2);
    rem(n1,n2);
    return 0;
}
