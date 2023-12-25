#include<iostream>
using namespace std;

// first type 
// int i=1;
// void fun1(int n){
    
//     if(i==n){
//         cout<<n;
//         return;
//     }
//     cout<<i<<endl;
//     i=i+1;
//     fun1(n);
   
// }



// second type 
// void fun1(int n){
//     if(n==1){
//         cout<<1<<endl;
//         return;
//     }
//     fun1(n-1);
//     cout<<n<<endl;
// }


// even number 
// void even(int n){
//     if(n==2){
//         cout<<n<<endl;
//         return;
//     }
//     even(n-1);
//     if(n%2==0){
//         cout<<n<<endl;
//     }
// }


// factorial 
//  int fact(int n){
//    if(n==1 || n==0){
//     return 1;
//    }

//    int val= n* fact(n-1);
//    return val;
   
// }


// sum of n

// int sum(int n){
//     if (n==1){
//         return 1;
//     }

//     return n+sum(n-1);
    
// }


// power of 2

// int powerfun(int n,int p){
//     if(p==1){
//         return n;
//     }
//      return n*powerfun(n,p-1);
   
// }


// sum of square of N numbers

int squareSum(int n){
    if(n==1){
        return 1;
    }

    return n*n+squareSum(n-1);

    // cout<<n;
}

int main(){
    cout <<"Started.."<<endl;
    //  fun1(10);
    //  even(10);
    // cout<<fact(5);
    // cout<<sum(5);
    // cout<<powerfun(2,10);
    cout<<squareSum(5);
    

}




