#include<iostream>
#include<fstream>
using namespace std;

int main(){
    cout<<"File Handling"<<endl;
    ofstream fout;
    fout.open("demo.txt");
    fout<<"hello gys";
    fout.close();


}