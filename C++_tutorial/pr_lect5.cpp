#include <iostream>
using namespace std;

int main(){
    cout << "5th lecture started" <<endl;

    cout << "Bitwise operator" <<endl;

    int a=4;
    int b=6;

    cout <<" a&b " <<(a & b) <<endl;
    cout <<" a|b " <<(a | b) <<endl;
    cout <<" ~a " <<(~a) <<endl;
    cout <<" a^b " <<(a ^ b) <<endl;

    // pre/post/increment/decrement
    int n=4;
    cout << (n++) <<endl;
    cout <<(++n) <<endl;
    cout <<(n--) <<endl;
    cout <<(--n) <<endl;

    // for loop 
    cout <<"For loop"<<endl;
    int i;
    for(i=0;i<=10;i++){
        cout <<i <<endl;
    }


    // fibonacci series
    cout << "fibonacci series"<<endl;

    int fib1=0;
    int fib2=1;
    cout <<fib1 <<" " <<fib2 <<" ";

    for(int n=fib1;n<10;n++){
        int nextnum;
        nextnum=fib1+fib2;
        cout <<nextnum <<" ";
        fib1=fib2;
        fib2=nextnum;
    }
}