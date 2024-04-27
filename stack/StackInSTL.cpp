#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>S;
    S.push(5);
    S.push(6);
    S.push(7);
    S.push(8);

    cout<<S.size();  
     S.pop();
    cout<<S.size();  


}