#include<iostream>
using namespace std;
void tohcal(int n,int sour,int help,int des){
    if(n==1){
        cout<<"move disk "<<n<<" from rod "<<sour<<" to rod "<<des<<endl;
        return;
 
    }


    tohcal(n-1,sour,des,help);
    cout<<"move disk "<<n<<" from rod "<<sour<<" to rod "<<des<<endl;
    tohcal(n-1,help,sour,des);

}
int main(){
    cout<<"tower of hanoi"<<endl;

    int n=3;
    
    tohcal(n,1,2,3);
}