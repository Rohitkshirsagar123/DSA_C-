#include<iostream>
using namespace std;


int perfectsum(int arr[],int index,int n,int sum){
    if(index==n){
        return sum==0;
    }

    return perfectsum(arr,index+1,n,sum) + perfectsum(arr,index+1,n,sum-arr[index]);
}
int main(){
    cout<<"Perfect sum subsequence"<<endl;

    int arr[]={2,5,6,1,0};
    // int arr[]={1,0};
    int sum=8;
    cout<<perfectsum(arr,0,4,sum);
}