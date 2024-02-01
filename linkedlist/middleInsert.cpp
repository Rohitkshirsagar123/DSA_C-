#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int value){
        data=value;
        next=NULL;
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
    cout<<"added element middle"<<endl;
    Node *Head;
    Head=NULL;

    int arr[]={1,3,4,5,67};

    Head =Createlinekdlist(arr,0,4);

    cout<<endl<<"Original"<<endl;
    Node *temp3=Head;
    while(temp3 !=NULL){
        cout<<temp3->data<<"-->";
        temp3=temp3->next;
    }

    int x=3;
    int value=30;
     Node *temp = Head;
     x--;
     while(x--){
        temp=temp->next;
     };

     Node *temp2= new Node(value);
     temp2->next=temp->next;
     temp->next=temp2;
    

cout<<endl<<"Added element "<<endl;
 Node *temp4=Head;
 while(temp4 !=NULL){
        cout<<temp4->data<<"-->";
        temp4=temp4->next;
    }
}