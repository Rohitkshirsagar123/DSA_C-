#include <iostream>
#include <typeinfo>
#include <math.h>
using namespace std;

int main(){
    cout << "lecture 6 started" <<endl;

    int n;
    cout<< "enter number=";
    cin>>n;

    // decimal to binary 
    // int ans=0;
    // int i=0;
    
    // while(n !=0){
    //     int bit=n & 1;
    //     ans=(bit * pow(10,i)) + ans;
    //     // cout<< bit <<endl;
    //     n=n >> 1;
    //     i++;

    // }
    // cout<< ans;




    // binary to decimal 

    // int ans=0;
    // int i=0;
    
    // while(n !=0){
    //     int digit=n % 10;
    //     cout << digit <<endl;
    //     if (digit ==1){
    //         ans=ans+ pow(2,i);
           
    //     }
    //     n=n / 10;
    //     i++;
    // }
    // cout<< ans;


    int ans=0;
    while(n!=0){
        int digit =n % 10;
        cout << digit <<endl;
        char str(digit);
        

        n=n/10;
    }

}