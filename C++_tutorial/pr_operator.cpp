#include <iostream>
using namespace std;

int main(){
    cout << "started operator" <<endl;

    int a=10;
    int b=20;
    cout <<a+b <<endl;

    cout <<5/2 <<endl; // value is int and int answer always int   === 2

    cout << 2/5 <<endl; // value is int and int answer always int   === 0
    cout << 2.0/5 <<endl; // value is float and int answer is float === 0.4
}