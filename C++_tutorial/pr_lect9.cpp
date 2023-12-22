#include <iostream>
using namespace std;

void reverse(int a[],int size){
   int start=0;
   int end=size-1;

   while(start<=end){
    swap(a[start],a[end]);
    start++;
    end--;
   }
}

void printArray(int a[], int n) {
    
    for(int i=0; i<n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

// void add(int a[],int size){
//     int sum=0;
//     for(int i=0;i<size;i++){
//             sum=sum+a[i];
//     }
//     cout <<"sum is"<<sum;
// }

int main(){
    cout<<"lecture 9 started"<<endl;

    // int a[10]={9,5,6,8,3,9,2};

    // cout<<a[0] <<endl;
    // int n=10;
    // for(int i=0;i<n;i++){
    //     cout <<a[i]<< " "<<endl;
    // }

    // cout<<sizeof(a)/sizeof(int);

    int a[5]={1,7,9,2,0};
    int n=5;
    // add(a,n);

    reverse(a,n);
    printArray(a, n);
    cout<<"execute";



}