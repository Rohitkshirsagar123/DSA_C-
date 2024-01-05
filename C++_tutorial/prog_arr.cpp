#include <iostream>
using namespace std;

int main(){
    cout <<"array"<<endl;

    int arr[10]={1,8,6,9};

    // cout<<arr[0]<<endl;
    // cout<<sizeof(arr)<<endl;  // sizeof function print value in bits
    
    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        cout<<arr[i]<<endl;

    }
}