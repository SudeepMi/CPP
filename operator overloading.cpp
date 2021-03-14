// Define a class named complex with data members real and img.
//  Use appropriate member function of the class which accepts two object of the class and add them.
#include <iostream>
using namespace std;

class ComplexNumber{
    public:
    int real;
    int img;

    ComplexNumber add(ComplexNumber a, ComplexNumber b){
        ComplexNumber temp;
        temp.real = a.real + b.real;
        temp.img = a.img + b.img;
        return temp;
    }
    void display(){
        cout<<real<<"+"<<img<<"i";
    }
};

int main(){
    ComplexNumber c1,c2,c3;
    c1.real = 11;
    c1.img = 22;
    c2.real = 111;
    c2.img = 222;
    c3 = c3.add(c1, c2);
    cout<<"sum of "<<c1.real<<"+"<<c1.img<<"i  and "<<c2.real<<"+"<<c2.img<<"i is : ";
    c3.display();
    return 0;
}
