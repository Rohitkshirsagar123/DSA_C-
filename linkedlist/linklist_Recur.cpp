#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

   Node(int value){
        data=value; 
        next= NULL;
    }
};

Node* Createlinekdlist(int arr[],int index,int size){
    if(index==size){
        return NULL;
    }
    Node *temp;
    temp=new Node(arr[index]);
    temp->next=Createlinekdlist(arr,index+1,size);

    return temp;
}

int main(){
    cout<<"add node at end, Recurssion"<<endl;
    int arr[]={1,4,6,8};

    Node *Head;
    Head=NULL;

    Head =Createlinekdlist(arr,0,4);

     Node *temp=Head;
    while(temp !=NULL){
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
}