#include<iostream>
using namespace std;

class parent{
    public:
    string name;
};

class child:public parent{
    public:
    int age;
};



int main(){
    cout<<"Inheritance"<<endl;
    parent p1;
    p1.name="rk";
    cout<<p1.name<<endl;

    child c1;
    c1.name="child 1";
    c1.age=33;
    cout<<c1.name<<endl<<c1.age;

}



// single inheritance 
//                  one class pass property to another class is called single Inheritance


// multilevel inheritance
//                      - multiple level of inheritance

// multiple inheritance
//                     - one class as a multiple inheritance

// hirerachical inheritance 
//                      - it is tree like structure

// hybrid inheritance
//                  - mix of inheritance


// multipath inheritance
//                  - multiple path to inherit properties
