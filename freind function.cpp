// WAP in c++ which has two classes: Academic and ExtraActivities which have own data members to store academic and extra activities marks respectively. 
// Define independent function which calculates total marks.
#include <iostream>
using namespace std;

class ExtraActivities;

class Academic{
    public:
    int marks;
    friend int add(Academic, ExtraActivities);

};

class ExtraActivities{
    public:
    int marks;
    friend int add(Academic, ExtraActivities);
};

 int add(Academic ac, ExtraActivities ex){
     return (ac.marks + ex.marks);
 }

 int main(){
     Academic academic;
     ExtraActivities extra_activities;
     int totalmarks;
     academic.marks = 900;
     extra_activities.marks = 800;
     totalmarks = add(academic, extra_activities);
     cout<<" Academic marks = "<<academic.marks<<endl;
     cout<<" ExtraActivities marks =" <<extra_activities.marks<<endl;
     cout<<" Total = "<<totalmarks; 
     return 0;
 }
