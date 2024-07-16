#include<iostream>
#include<array>
#include<algorithm>
#include<vector>
using namespace std;
 int main(){

    vector<int> arr={1,8,4,6,2} ;
    sort(arr.begin(),arr.end());
    for(int num:arr)
     cout<<num<<endl;
     return 0;
