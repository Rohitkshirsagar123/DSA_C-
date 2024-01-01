#include<iostream>
using namespace std;

// void printArray(int arr[],int i,int n){
//     if(i==n){
//         return;
//     }
   
//     cout<<arr[i]<<endl;
//     printArray(arr,i+1,n);
// }

// second approach 
// void printArray(int arr[],int n){
//     if(n==-1){
//         return;
//     }
//     printArray(arr,n-1);
//      cout<<arr[n]<<endl;
// }


/*int main(){
    cout<<"Recursion in Array"<<endl;

     int arr[] = {1, 3, 5, 67, 8};
      printArray(arr,0,5);
    printArray(arr,4);  

}*/



// sum of array 
/*int sumArray(int arr[],int size){
    if(size ==-1){
        return 0;
    }
    return arr[size]+sumArray(arr,size-1);
}

int main(){
    cout<<"sum of array"<<endl;

    int arr[]={1,2,3,4,8};
    cout<<sumArray(arr,4);
}*/


// minimum element array

int mineleArray(int arr[],int index,int n){
    if(index==n-1)
        return  arr[index];
    return min(arr[index],mineleArray(arr,index+1,n));
}

int main(){
    cout<<" minimum element array"<<endl;

    int arr[]={4,2,1,9,22,4,0};
    cout<<mineleArray(arr,0,7);
}