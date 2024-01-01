#include<iostream>
#include <vector>
using namespace std;


void subseq(int arr[],int index,int n,vector<vector<int>> & ans,vector<int>temp){

    if(index==n){
        ans.push_back(temp);
        return;
    }
    // not include
    subseq(arr,index+1,n,ans,temp);

    // include
    temp.push_back(arr[index]);
     subseq(arr,index+1,n,ans,temp);
}

int main(){
    cout<<"Susequence..."<<endl;

    int arr[]={1,2,3};
    vector<vector<int>> ans;
    vector<int>temp;

    subseq(arr,0,3,ans,temp);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}







//   Subsequence of string
/*void stringsubseq(string str,int index,int n,vector<string> & ans,string temp){

    if(index==n){
        ans.push_back(temp);
        return;
    }
    // not include
    stringsubseq(str,index+1,n,ans,temp);

    // include
    temp.push_back(str[index]);
     stringsubseq(str,index+1,n,ans,temp);
     temp.pop_back();
}



int main(){
    cout<<"string stringsubsequences.."<<endl;
    string str="abc";
    vector<string> ans;
    string temp;

    stringsubseq(str,0,3,ans,temp);

     for(int i=0;i<ans.size();i++){
      
        cout<<ans[i]<<endl;
    }
}
*/



// Generate parentheses

/*void generatepara(int num,int left,int right,vector<string>& ans,string & temp){

    if(left+right ==2*num){
       
        ans.push_back(temp);
        return;
    }

    if(left<num){
        temp.push_back('(');
        generatepara(num,left+1,right,ans,temp);
        temp.pop_back();

    }
    if(right<left){
        temp.push_back(')');
        generatepara(num,left,right+1,ans,temp);
        temp.pop_back();

    }


}

int main(){
    cout<<"Generate parentheses"<<endl;

    int num=3;
    vector<string> ans;
    string temp;
    generatepara(num,0,0,ans,temp);

     for(int i=0;i<ans.size();i++){
      
        cout<<ans[i]<<endl;
    }

}*/
