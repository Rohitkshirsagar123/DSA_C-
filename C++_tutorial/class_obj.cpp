#include <iostream>
using namespace std;

// class student{
//     public:
//     int roll_no;
//     int print(){
//     cout<<"roll no "<<roll_no<<endl;
//     }
// };

class ak;

int main(){
    // student s1;
    // s1.roll_no=10;
    // s1.print();


    class ak{
        public:
        string name;

        string print_data(){
            cout<<"name is "<<name<<endl;
        }

        ak(){ //default constructor
            cout<<"default constructor"<<endl;
        }
        ak(string ab){ //parameterized constructor
            cout<<"parameterized constructor"<<endl;
            name=ab;
        }
    };

    ak br;
    br.name='a';
    br.print_data();
    ak br2("ss");
    br2.print_data();
}
