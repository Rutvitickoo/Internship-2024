#include<iostream>
using namespace std;
void bubblesort(int array[]){
 int i,j;
 for(i=0;i<4;i++){
  for(j=0;j<4;j++){
        if(array[j]>array[j+1]){

            int temp=array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
        }
 }
 }
 cout<<"sorted final array"<<endl;
 for(int z=0;z<5;z++){
    cout<<array[z]<<endl;
 }
 }
int main (){
int array[5]={3,8,1,2,0};
cout<<"unsorted initial array"<<endl;
for(int x=0;x<5;x++){
        cout<< array[x]<<endl;

}
bubblesort(array);
}
