#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int val){
        data=val;
        next = NULL;
        prev= NULL;

    }

};

int main(){
    Node * head=NULL;
  
    Node *tail=NULL;
    int arr[] = {1,2,3,4,5,6};

    for(int i=0;i<5;i++){
        if(head==NULL){
            head = new Node(arr[i]);
            tail=head;
        }
        else{
             Node *temp=new Node(arr[i]);
             tail->next=temp;
             temp->prev=tail;
             tail=temp;
        }
    }

      Node *trav =head;
        cout<<"The Doubly Linked List"<<endl;
        while(trav){
            cout<<trav->data<<" ";
            trav=trav->next;
        }


}