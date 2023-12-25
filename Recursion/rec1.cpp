#include<iostream>
using namespace std;
 void fun(int n){
      if(n==0){
        cout<<"happy Birthday";
        return;
      } 
      cout<<n<<" left days"<<endl;
       fun(n-1);
    }

int main(){
    cout<<"hello ! started recursion"<<endl;
    fun(8);
}