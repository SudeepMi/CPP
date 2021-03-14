#include<iostream>
#include<math.h>

using namespace std;
int power(int base, int power);
int power(int base, int base2, int power);

int main(){
    
    cout<<power(3,2)<<endl; //3^2
    cout<<power(2,2,2)<<endl; // (2+2)^2

    return 0;
}

int power(int base, int power){
        return pow(base,power);
}
int power(int base, int base2, int power){
        return pow((base+base2),power);
}