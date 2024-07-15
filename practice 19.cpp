#include<iostream>
using namespace std;
void sort_array(int arr[])
{

    int i,j,temp;
    for(i=0;i<5;i++){
            for(j=0;j<5;j++){
        if(arr[j]>arr[j+1]){
            temp =arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
cout <<"sorted array:"<<endl;
for(int z=0;z<6;z++){
    cout<<arr[z]<<endl;
}
}
void search_array()
{
    int x=89;
    int arr[6]={5,12,44,45,67,89};
    if(x==arr[2])
    {
        cout<<"element found at index"<<6/2;
    }
    else if (x>arr[2])
    {
        for(int i=arr[3];i<6;i++)
        {
          if(x==arr[i]){
            cout<<"element found at index"<<i;
          }
        }
    }
    else if (x>arr[2])
    {
        for(int i=0;i<2;i++)
        {
          if(x==arr[i]){
            cout<<"element found at index"<<i;
          }
        }
    }
    else
    {
        cout<<"no such element present";

    }

}
int main()
{
  int arr[6]={44,5,67,12,89,45};
  sort_array(arr);
  search_array();
   return 0;

}
