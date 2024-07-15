#include<iostream>
#include<string>
int main(){
std::string str="hello world!";
std::string from=" world";
std::string to="c++";
size_t start_pos=str.find(from);
if(start_pos!=std::string::npos)
{
  str.replace(start_pos,from.length(),to);

}
std::cout<<"string after replacement:"<<str << std::endl;
return 0;
}
