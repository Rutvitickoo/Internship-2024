#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string>q;
    q.push( "abha");
    q.push( "sabha");
    q.push( "mabha");
    cout<<q.size()<<endl;
    q.pop();
    cout<<q.front();


}
