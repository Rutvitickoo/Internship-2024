#include<iostream>
using namespace std;
int main(){
int array [5]={10,20,30,40,50};
int sum=0;
for(int i=0;i<5;i++)
    sum +=array[i];
cout<<"sum is "<< sum;
//next file
int max = -32678;
for (int i=0;i<5;i++)
{

    if (array[i]>max)
    {
        max=array[i];
    }
}
cout << " max "<< endl;
// next file
int user_input;
cout<<"enter the no you want to search for in the array:";
cin>> user_input;
int counter =0;
for(int i=0;i<5;i++){
     if(array[i]==user_input)
     {

         cout<<"number"<<user_input << " is found at the location"<< counter;
         exit(0);
     }
counter++;
}
cout<<"not found!";
return 0;

}
