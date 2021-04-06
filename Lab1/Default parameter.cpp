// Write a program in c++ with a function named AreaOfCircle() which receives two arguments: radius and PI.
//  Make default argument to PI to use default value 3.14 if it is not supplied in function call otherwise use user supplied value.

#include <iostream>
using namespace std;
void AreaOfCircle(float radius, float PI=3.14);
int main(){
    float radius = 5;
    float PI = 3.14;
    AreaOfCircle(radius,PI);  
    AreaOfCircle(radius);  
    return 0;

}
void AreaOfCircle(float radius, float PI){
    cout<<"Area of circle is"<<PI*radius*radius<<endl;
}
