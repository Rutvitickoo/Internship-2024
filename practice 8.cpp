#include<iostream>
using namespace std;
    const int pen{ 10 };
    const int marker{ 20 };
    const int eraser{ 30 };
    const int rectangle{ 40 };
    const int circle{ 50 };
    const int ellipse{ 60 };
    int main(){
    int tool (eraser);
    switch(tool)
    {
        case pen:{
            cout<<"active tool is pen"<<endl;
    }
    break;
    case marker:{
          cout<<"active tool is marker"<<endl;
    }
    break;
    case eraser :
    case rectangle:
        case circle:{
        cout<<"drawing shapes"<<endl;
        }
        break;

            case ellipse:{
                cout<<"active tool is ellipse"<<endl;
    }
    break;
default :{
    cout<<"no match found"<<endl;
    }
    break;
    }
    cout<<"moving on"<<endl;
    return 0;
    }
