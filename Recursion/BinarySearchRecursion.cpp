#include<iostream>
using namespace std;



// linear search
/*bool findElem(int arr[],int N,int num){

    if(N == -1){
        return 0;
    }

    if(arr[N]==num){
        return 1;
    }
    return findElem(arr,N-1,num);
}

int main(){
    cout<<"Linear search"<<endl;
    int arr[]={1,2,3,8,5};
    int N=4;
    int num=8;
    int val=findElem(arr,N,num);
    if(val==0){
        cout<<"is not present";
    }
    else{
        cout<<"is present";
    }
}*/



// binary search - apply sorted array

bool searchElem(int arr[],int start,int end,int num){

    if(start>end){
        return 0;
    }
    int mid=start+(end-start)/2;
    if(arr[mid]==num){
        return 1;
    }
    else if(num>arr[mid]){
        start=mid+1;
    }
    else if(num<arr[mid]){
        end=mid-1;
    }
    
    return searchElem(arr,start,end,num);
}

int main(){
    cout<<"Binary Search"<<endl;
    int arr[]={1,2,3,4,8};
    int num=30;
    cout<<searchElem(arr,0,4,num);
}



