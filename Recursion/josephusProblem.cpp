#include<iostream>
#include <vector>
using namespace std;

int winner(vector<bool>&person,int n,int index,int personLeft,int k){
    if(personLeft==1){
        for(int i=0;i<n;i++){
            if(person[i]==0){
                return i;
            }
        }
    }
    
    // find position of kill
    int kill=(k-1)%personLeft;
    while(kill--){
        index=(index+1)%n;
        while(person[index]==1){
                index=(index+1)%n;
        }
    }
    person[index]=1;

        // next alive person
    while (person[index]==1)
    {
        index=(index+1)%n;
    }

    return winner(person,n,index,personLeft-1,k);
 
   
}

int main(){
    cout<<"josephus Problems / Predict the winner"<<endl;

    int n=5;
    int k=2;
    vector<bool>person(n,0);

    cout<<winner(person,n,0,n,k);

}