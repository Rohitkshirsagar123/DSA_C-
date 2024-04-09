#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};

Node * createDll(int arr[],int index,int size,Node *back){
    if(index==size)
        return NULL;


    Node *temp = new Node(arr[index]);
    temp->prev=back;

    temp->next = createDll(arr,index+1,size,temp);
    return temp;

   
}

int main(){
    cout<<"doubly linkedlist insert at given pos"<<endl;
    Node *head =NULL;
    int arr[] = {1,2,3,4,5};
    head=createDll(arr,0,5,NULL);

    int pos=1;

    // insert at start 
    if(pos==0){
        // linkedlist not exist
        if(head==NULL){
            head= new Node(88);

        }
        // linkedlist exist
        else{
            Node *temp= new Node(88);
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
    }
    else{
        Node *curr = head;
        while(--pos){
            curr=curr->next;
        }

        // insert at end
        if(curr->next==NULL){
           Node *temp= new Node(88);
           temp->prev=curr;
           curr->next=temp;

        }
        // insert at middle
        else{
            Node *temp=new Node(88);
            temp->next=curr->next;
            temp->prev=curr;
            curr->next=temp;
            temp->next->prev=temp;
            
        }
    }

    Node *trav= head;
    while(trav){
        cout<<trav->data<<" ";
        trav=trav->next;
    }
}