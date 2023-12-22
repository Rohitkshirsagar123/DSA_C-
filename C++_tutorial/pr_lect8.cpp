#include <iostream>
using namespace std;

int power(int a,int b){
    int ans=1;
    int i;
    for(i=1;i<=b;i++){
        ans=ans*a;
        
    }
    return ans;
}

int main(){
    cout <<"lect 8 started "<<endl;

    // switch case 

    // int num=3;
    // int num2=1;

    // switch (num)
    // {
    // case 1:
    //     cout<<"first";
    //     break;
    // case 2:
    //     cout<<"second";
    //     break;
    // case 3: switch (num2)
    //         {
    //         case 1:
    //             cout<<"execute"<<endl;
    //             break;
            
    //         default:
    //             break;
    //         }
    //         break;

    // default:
    // cout<<"default case"<<endl;
    //     break;
    // }



    // # function 
    int a=10;
    int b=3;
    cout << power(a,b) <<endl;
    cout << (a&1);

}