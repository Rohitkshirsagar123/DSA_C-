#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"STL library.................."<<endl;

    vector<int>vec;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    for(int i=0;i<vec.size();i++){
        cout<<vec[i] <<endl;
    }

    cout<<"use iterator"<<endl;

    for(auto it=vec.begin();it!=vec.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    cout<<"sort function"<<endl;

    sort(vec.begin(),vec.end());
    
    for(auto it=vec.begin();it!=vec.end();it++){
        cout<<*it<<" ";
    }

}

