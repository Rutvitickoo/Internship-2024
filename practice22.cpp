#include <iostream>
#include<array>
#include<deque>
#include<vector>
using namespace std ;

int main()
{
deque<int> d ;
 d.push_back(10);
 d.push_front(11);
 for(int i:d){
     cout<<i<<"";
 }
 d.pop_back();
 for(int i:d){
     cout<<i<<"";

 }
 d.pop_front();
 for(int i:d){
     cout<<i<<"";
}
cout<<"front"<<d.front()<<endl;
cout<<"back"<<d.back()<<endl;
cout<<"before erase"<<d.empty()<<endl;






 return 0;
}
