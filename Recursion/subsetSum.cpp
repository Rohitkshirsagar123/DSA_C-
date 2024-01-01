#include<iostream>
using namespace std;
#include <vector>

 void subsetsum(int arr[],int index,int n,int sum){
        if(index==n){
            cout<<sum<<endl;
            return;
        }

        // not include 
        subsetsum(arr,index+1,n,sum);

        // include 
        
        subsetsum(arr,index+1,n,sum+arr[index]);
    }

int main(){
    cout<<"subset Sum"<<endl;
    int arr[] = {3,4,5};
    vector<int>temp;
   
    int sum=0;
    subsetsum(arr,0,3,sum);



}