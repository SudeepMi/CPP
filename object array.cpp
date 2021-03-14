// Write a program to define a class named Employee with its data members ID, name and Salary. 
// Read records of five employees and display the records

#include <iostream>
using namespace std;

class Employee{
    public:
    int ID;
    string name;
    int salary;
    void read(){
        cout<<"Employee ID : ";
        cin>>ID;
        cout<<"Employee name : ";
        cin>>name;
        cout<<"Employee Salary : ";
        cin>>salary;
    }

    void display(){
        cout<<" ID : "<<ID<<endl;
       
        cout<<" name : "<<name<<endl;
        
        cout<<" Salary : "<<salary<<endl;
       
    }
};

int main(){
    Employee emp[5];
    cout<<"\t\t ***** Enter employee details *****"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<"\t\t # Employee #"<<i+1<<endl;
        emp[i].read();
    }

    cout<<"\t\t ***** Displaying employee details *****"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<"\t\t # Employee #"<<i+1<<endl;
        emp[i].display();
    }
     return 0;
}