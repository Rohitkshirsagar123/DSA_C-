#include<iostream>
using namespace std;


class customer{
    public:
    string name;

    customer(){
        cout<<"contructor function called"<<endl;
    }
};

int main(){
    cout<<"Object Oriented Programming (OOPS) - Constructor concept"<<endl;
    customer first;
    first.name="Rohit";
    cout<<first.name<<endl;
 

}