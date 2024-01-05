#include <iostream>
using namespace std;

int main(){
    cout<<"pointer"<<endl;
    int a;
    int *p= &a;
    int *val= &a;
    cout<<p <<" " <<val<<endl;

    cout<<"array"<<endl;

    int arr[8]={2,4,35,3};

    int *ptr;
    ptr=arr;
    cout<<ptr<<endl;
    ptr=&arr[1];
    cout<<ptr<<endl;
}