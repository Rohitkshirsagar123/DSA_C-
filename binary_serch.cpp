#include<iostream>
using namespace std;
#include<vector>

int main(){
    cout<<"Binary search..........."<<endl;
    float val=5/2;
    cout<<endl<<val<<endl<<endl;

    vector<int>arr;
    arr={1,4,2,6,8,9};
    int f=6;

    int s=0,e=arr.size()-1;
    int mid;

    while(s<=e){
        mid=(s+e)/2;


        if(arr[mid]==f){
            cout<< mid;
            break;

        }
        else if(arr[mid]>f){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1; // Element not found

}