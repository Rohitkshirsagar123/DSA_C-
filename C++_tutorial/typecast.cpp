#include<iostream>
using namespace std;

int main(){
    cout<<"type casting"<<endl;
    // int to double 
    int a=9;
    cout<<a<<endl;
    double b =a;
    cout<<b<<endl;
    
    // double to int
    double bc = 5.7;
    int abc = bc;
    cout <<abc<<endl;

    // string to int
    string ab="66";

    int val = stoi(ab);
    cout<<val<<endl;

}