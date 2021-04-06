// Define a class Birthday with members: day, month and year. 
// Use object of this class as member of another class Employee to read and display name and DOB of an employee.

#include <iostream>
using namespace std;

class Birthday{
    public:
    int day = 2;
    int month = 11;
    int year = 2020;

};
class Employee{
    public:
    string name = "Sudeep";
    Birthday birthday;
    void display(){
        cout<<"Name : "<<name<<endl;
        cout<<"DOB : "<<birthday.year<<"-"<<birthday.month<<"-"<<birthday.day<<endl;
    }
};

int main(){
    Employee emp;
    emp.display();
}