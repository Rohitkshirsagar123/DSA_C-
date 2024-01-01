#include<iostream>
using namespace std;
#include<vector>


/*void merge(int arr[],int start,int mid,int end){

        vector<int>temp(end-start+1);
        int left=start,right=mid+1,index=0;

        while(left<=mid && right<=end){

            if(arr[left]<=arr[right]){
                temp[index]=arr[left];
                index++,left++;
            }
            else{
                temp[index]=arr[right];
                index++,right++;

            }
        }

        // if left array is not empty
        while(left<=mid){
              temp[index]=arr[left];
              index++,left++;
        }

         // if right array is not empty
        while(right<=end){
              temp[index]=arr[right];
              index++,right++;
        }

        // copy temp array to main array
        index=0;
        while(start<=end){
            arr[start]=temp[index];
            start++,index++;
        }
}


void mergesort(int arr[],int start,int end){
    if(start==end){
        return;
    }
    int mid = start+(end-start)/2;
    // left part 
    mergesort(arr,start,mid);
    // right part 
    mergesort(arr,mid+1,end);

    merge(arr,start,mid,end);
}

int main(){
    cout<<"Merge sort -  sorted array ascending order"<<endl;
    int arr[]={6,3,5,2,2,8,1,3,2,9};
    mergesort(arr,0,9);

    for(int i=0;i<=9;i++){
        cout<<arr[i]<<" ";
    }
}*/


// sort array in decending order

void mergeDes(int arr[],int start,int mid,int end){
    vector<int>temp(end-start+1);
    int left=start,right=mid+1,index=0;

    while(left<=mid && right<=end){
        if(arr[left]>=arr[right]){
            temp[index]=arr[left];
            index++,left++;

        }
        else{
             temp[index]=arr[right];
             index++,right++;
           
        }
    }

   
        // if left array is not empty
        while(left<=mid){
              temp[index]=arr[left];
              index++,left++;
        }

         // if right array is not empty
        while(right<=end){
              temp[index]=arr[right];
              index++,right++;
        }

        // copy temp array to main array
        index=0;
        while(start<=end){
            arr[start]=temp[index];
            start++,index++;
        }
}


void mergeDesSort(int arr[],int start,int end){
    if(start==end){
        return;
    }
    int mid = start+(end-start)/2;
   
    mergeDesSort(arr,start,mid);

    // right 
    mergeDesSort(arr,mid+1,end);

    mergeDes(arr,start,mid,end);
}




int main(){
    cout<<"Merge sort -  sorted array descending order"<<endl;
    int arr[]={6,3,5,2,2,8,1,3,2,9};
    mergeDesSort(arr,0,9);

    for(int i=0;i<=9;i++){
        cout<<arr[i]<<" ";
    }
}