#include<iostream>
using namespace std;

class Area{
    public:
    int a1(int val){  // circle
        return 3.14*val*val;
    }
    int a1(int l,int b){  //rectangle
        return l*b;
    }
};


int main(){
    cout<<"Function Overloading"<<endl;
    Area s1;
    cout<<s1.a1(4)<<endl;
    cout<<s1.a1(4,5)<<endl;

}