#include <iostream>

using namespace std;

int main(){
  cout<<"patterns"<<endl;

  for(int i=0;i<=3;i++){
    for(int j=0;j<=3;j++){
        cout<<"*";
    }
    cout<<endl;
  }

     cout<<endl;
  for(int i=1;i<=3;i++){
    for(int j=1;j<=3;j++){
        cout<<i;
    }
    cout<<endl;
  }
     cout<<endl;

  for(int i=1;i<=3;i++){
    for(int j=1;j<=3;j++){
        cout<<j;
    }
    cout<<endl;
  }

   cout<<endl;
     
  for(int i=1;i<=3;i++){
    for(int j=1;j<=i;j++){
        cout<<j*2;
    }
    cout<<endl;
  }

  cout<<endl;
     
  for(int i=1;i<=3;i++){
    for(int j=1;j<=3-i+1;j++){
        cout<<"*";
    }
    cout<<endl;
  }

  cout<<endl;
     int n=3;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(n-i+1==j){
        cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
  }


  cout<<endl;
     int n=7;
     int t=4;

  for(int i=1;i<=t;i++){
    for(int j=1;j<=n;j++){
        
        if(n-i+1==j){
        cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
  }
}