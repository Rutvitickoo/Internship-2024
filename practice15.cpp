
//#include<iostream>
//#include<string>
//using namespace std;
//int main(){
  //  std::string str1="hello,";
    //std::string str2="world!,";
    //std::string result= str1+str2;
    //std::cout << "concatenated string :"<< result <<std:: endl;
    //return 0;
//}
// substring
#include <iostream>
#include<string>
int main(){
std::string str ="hello,world!";
std::string substr="world";
size_t found =str.find(substr);
if(found !=std::string::npos){
    std::cout<<"substring found at index :"<< found <<std::endl;
}
else{
        std::cout<<"substring not found"<<std::endl;
}

return 0;
}
