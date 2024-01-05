#include <iostream>
using namespace std;

int main(){
    cout<<"2D ARRRAY"<<endl;
    int rows=2;
    int col = 3;
    int arr[rows][col]={{1,3,4},{3,8,22}};

    for(int i=0; i<rows;i++){
       for(int j=0; j<col;j++){
         cout<<arr[i][j];
       } 
       cout<<endl;
    }
}