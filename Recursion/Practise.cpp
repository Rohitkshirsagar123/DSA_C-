
#include<iostream>
using namespace std;



// fibonacci number ------------------------------------------------------------------------------------

/*int fibo(int n){
    if(n==0){
        return 0;
    }

    if(n==1){
        return n;
    }

    int prev= fibo(n-1);
    int secondprev =fibo(n-2);

    return prev+secondprev;


}
*/

// int main(){
//     cout<<"Solved questions"<<endl;

   /* int firstPrev=0;
    int secondPrev=1;
    int next=0;
    int n=10;
    for(int i=secondPrev;i<n;i++){

         next=firstPrev+secondPrev;
         firstPrev=secondPrev;
         secondPrev=next;
    }

    cout<<next<<endl; */

    // cout<<fibo(3);
// }







// Nth stair  -----------------------------------------------------------------------

/*
int totalWays(int n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    return totalWays(n-1)+totalWays(n-2);
}
int main(){

    cout<<"Nth Stairs"<<endl;

    cout<<totalWays(4);
}

*/


// "GCD of 2 numbers



int GcdTwoNum(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    int temp=b;
    b= a%b;
    a=temp;
    GcdTwoNum(a,b);
}
int main(){
    cout<<"GCD of 2 numbers"<<endl;
    cout<<GcdTwoNum(12,39);

}