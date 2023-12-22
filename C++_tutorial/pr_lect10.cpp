#include <iostream>
using namespace std;

void printdetail(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    cout <<"lecture 10 started"<<endl;

    int a[6]={2,3,4,5,6,7};
    int n=6;
    for(int i=0;i<=n;i++){
        swap(a[i],a[i+1]);
        i++;
    }

    cout<<"start"<<endl;

    printdetail(a,n);

    
}

