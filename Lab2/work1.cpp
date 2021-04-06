#include <iostream>
using namespace std;

class Pointers{
    public:
        int height;
        Pointers(int a){
            height=a;
        }
        
        int getData(){
            return this->height;
        }
};

int main(){
    Pointers p(20);
    int height;
    height = p.getData();
    cout<<"Height : "<<height<<endl;
    return 0;
}
