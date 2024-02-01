#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;

    Node(int value){
        data=value;
        next= NULL;
    }
};

int main(){
    cout<<"linked list"<<endl;
    int arr[]={1,4,5,6};
    Node *Head;
    Head=NULL;
    Node *tail=NULL;

    // added node first 
    cout<<"Added Node first"<<endl;
    
    for(int i=0;i<4;i++){
        if(Head == NULL){
         Head= new Node(arr[i]);
         tail=Head;
        }
        else{
            Node *temp;
            temp= new Node(arr[i]);
            temp->next=Head;
            Head=temp;
        }
    }

    Node *temp=Head;
    while(temp !=NULL){
        cout<<temp->data<<"-->";
        temp=temp->next;
    }


     cout<<endl<<"Added Node last"<<endl;
    // Node *tail=Head;
    // while(tail->next != NULL){
    //     tail=tail->next;
    // }
    // Node *temp2=new Node(2000);
    // temp2->next=temp2;
    tail->next=new Node(2000);
    tail=tail->next;


     Node *temp3=Head;
    while(temp3 !=NULL){
        cout<<temp3->data<<"-->";
        temp3=temp3->next;
    }


}