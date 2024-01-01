#include<iostream>
using namespace std;

int targetrepetation(int arr[],int index,int n,int sum){
    if(sum==0){
        return 1;
    }
    if(index==n || sum<0){
        return 0;
    }

    return targetrepetation(arr,index+1,n,sum)+targetrepetation(arr,index,n,sum-arr[index]);
}
int main(){
    cout<<"target sum repetation ways"<<endl;
    int arr[]={2,3,4};
    int sum=6;

    cout<<targetrepetation(arr,0,3,sum);
}