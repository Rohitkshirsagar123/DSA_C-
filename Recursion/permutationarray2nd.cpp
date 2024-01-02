#include<iostream>
#include<vector>
using namespace std;

/*void permut( vector<int>&arr,vector<vector<int>>&ans,int index){

    if(index==arr.size()){
        ans.push_back(arr);
        return;
    }

    vector<bool>use(21,0);
    for(int i=index;i<arr.size();i++){

        if(use[arr[i]+10]==0){
            swap(arr[index],arr[i]);
            permut(arr,ans,index+1);
            swap(arr[index],arr[i]);
            use[arr[i]+10]=1;
        }
    }
}

int main(){
    cout<<"permutation 2nd"<<endl;
    vector<int>arr={1,1,2};
    vector<vector<int> >ans;
    permut(arr,ans,0);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
  
}*/




// ways to sum N

int ways(int arr[],int m,int sum){
    if(sum==0){
        return 1;
    }
    if(sum<0){
        return 0;
    }
    int ans=0;
    for(int i=0;i<m;i++){
        ans+=ways(arr,m,sum-arr[i]);
    }
    return ans;
}

int main(){
    cout<<"ways sum N"<<endl;
    int arr[]={1,5,6};
    int sum=7;
    cout<<ways(arr,3,sum);
}