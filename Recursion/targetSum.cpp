#include<iostream>
using namespace std;
bool findtargetsum(int arr[],int index,int n,int target){

    if(target==0){
        return 1;
    }
    if(index==n || target<0){
        return 0;
    }


    findtargetsum(arr,index+1,n,target)||findtargetsum(arr,index+1,n,target-arr[index]);
}
int main(){
    cout<<"target sum..."<<endl;
    int arr[]={3,6,4,5};
    int target=199;

    cout<<findtargetsum(arr,0,4,target);
}