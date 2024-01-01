#include<iostream>
using namespace std;


// 1 check palidrome

/*bool checkPalidrome(string str,int start,int end){

     if(start>end){
        return 1;
    }

    if(str[start]!=str[end]){
        return 0;
    }
   
    return checkPalidrome(str,start+1,end-1);
}

int main(){
    cout<<"Recursion in string"<<endl;
    string str="Rohit";
    int l=str.length()-1;

    int ans=checkPalidrome(str,0,l);

    if(ans==0){
        cout<<"is not Palidrome";
    }else{
        cout<<"is Palidrome";
    }


}*/



// count vowels

/*int countVowels(string str,int index){
    if(index==-1){
        return 0;
    }
    
    if(str[index]=='a' || str[index]=='e' || str[index]=='i' || str[index]=='o' || str[index]=='u' ){
        return 1+countVowels(str,index-1);
    }
    else{
        return countVowels(str,index-1);
    }

}


int main(){
    cout<<"Count vowels"<<endl;
    string str="aman";
    int index=str.length()-1;
    cout<<countVowels(str,index);

}*/


// Reverse string

/*void reverseString(string &str,int start,int end){

    if(start>end){
        return;
    }

    char c=str[start];
    str[start]=str[end];
    str[end]=c;

    reverseString(str,start+1,end-1);
}

int main(){
    cout<<"Reverse string"<<endl;
    string str="Rohit";
    int end=str.length()-1;

    reverseString(str,0,end);
    cout<<str;

}*/


// lower to Uppercase
//  'A' + str[index] -'a'
// 'A' + r -'a'
// 65+18-1
// 65+17
// 82 ------> 'R'

void lowerToUpper(string &str,int index){
        if(index==-1){
            return;
        }
        str[index]= 'A' + str[index] -'a';
        return lowerToUpper(str,index-1);
}

// uppercase

void UpperToLower(string &upperstr,int upindex){
    if(upindex==-1){
        return;
    }
    upperstr[upindex]='a' +upperstr[upindex]-'A';

    return UpperToLower(upperstr,upindex-1);
}

int main(){
    cout<<"lower to uppercase and upper to lower"<<endl;
    string str="akbar";
    int index = str.length()-1;
    lowerToUpper(str,index);
    cout<<str<<endl<<endl;

    // uppercase
    string upperstr="ROHIT";
     int upindex = upperstr.length()-1;
    UpperToLower(upperstr,upindex);
    cout<<upperstr;
}

