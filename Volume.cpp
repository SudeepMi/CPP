// WAP in c++ to define a class named Box which has private data length, breadth and height 
// & public functions ReadData() for reading data members and Volume() to calculate volume of the box.

#include <iostream>
using namespace std;

class Box{
    private:
    float length;
    float breadth;
    float height;
    public:
    void ReadData(){
        cout<<"Length = ";
        cin>>length;
        cout<<"Breadth = ";
        cin>>breadth;
        cout<<"Height = ";
        cin>>height;
    }
    float Volume(){
        return length*breadth*height;
    }

};

int main(){
    Box b;
    b.ReadData();
    cout<<"volume = "<<b.Volume()<<endl;
    return 0;

}