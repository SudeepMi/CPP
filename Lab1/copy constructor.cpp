//WAP in c++  which contains a class named Box with appropriate data members and function members. 
//Initialize an object of the class with parameterized constructor and copy this object into another object using copy constructor.

#include <iostream>
using namespace std;

class Box{
    public:
    int l;
    int b;
    int h;
    Box(int a, int d, int c){
        l = a;
        b = d;
        h = c;
    }
    Box( const Box &box){
        l = box.l;
        b = box.b;
        h = box.h;
    }
    int volume(){
        return l*b*h;
    }
};

int main(){
    Box b1(3,4,5);
    Box b2 = b1;
    
    cout<<"for box 1 : l = "<<b1.l<<" b = "<<b1.b<<" h = "<<b1.h<<endl;
    cout<<"for box 2 : l = "<<b2.l<<" b = "<<b2.b<<" h = "<<b2.h<<endl;
    return 0;
}