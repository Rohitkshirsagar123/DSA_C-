#include<iostream>
using namespace std;


class Student{
    public:
    string name;

    void print(){
        cout<<"hi!..."<<endl;
    }
};

int main(){
    cout<<"Object Oriented Programming (OOPS) "<<endl;
    Student s1;
    s1.name="student 1";
    cout<<s1.name;
    s1.print();

}