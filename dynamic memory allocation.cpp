//Write a program in c++ to read number of students and then marks of each student. Display entered marks and their average.
//Use dynamic memory allocation to reserve memory to store marks of each student
#include <iostream>
using namespace std;
int main(){
    int no_of_students;
    int subs;
   

    cout<<"Enter the number of students :";
    cin>>no_of_students;
    cout<<"Enter the number of subject :";
    cin>>subs;
    for (int i = 0; i < no_of_students; i++)
    {
        int *marks = new int[subs];
        cout<<"\t\t #STUDENT["<<i+1<<"]"<<endl;
        for (int j = 0; j < subs; j++)
        {
            cout<<"\t\t Marks for subject #"<<j+1<<":";
            cin>>marks[j];
        }

        cout<<"\t\t # Marks entered are:"<<endl;
        int total=0;
        for (int j = 0; j < subs; j++)
        {
            cout<<"\t\t Marks for subject #"<<j+1<<":"<<marks[j]<<endl;
            total += marks[j];
        }
        cout<<"\t\t # Average :"<< total/subs <<endl;

        
    }

    return 0;
    
}