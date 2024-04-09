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
    cout<<"delete element"<<endl ;
    Node *head =NULL;
    int arr[] = {1,2,3,4,5};
    head=createDll(arr,0,5,NULL);


    // delete at start 
    if(head !=NULL){
        if(head->next==NULL){
            delete head;
            head=NULL;
        }
        else{
            Node *temp=head;
            head=head->next;
            delete temp;
            head->prev=NULL;
        }
    }

    

    // delete at end 

    if(head!=NULL){
        if(head->next==NULL){
            delete head;
            head=NULL;
        }
        else{
            Node *curr = head;
            while(curr->next){
                curr=curr->next;
            }
            curr->prev->next=NULL;
            delete curr;
        }
    }


    // delete a node at given pos

    int pos=2;
    // delete at start 
      if(head->next==NULL){
            delete head;
            head=NULL;
      }
      else{
        Node*curr=head;
        while(--pos){
            curr=curr->next;
        }
        // delete at end 
        if(curr->next==NULL){
            curr->prev->next=NULL;
            delete curr;
        }
          // delete at middle 
        else{
            curr->prev->next= curr->next;
            curr->next->prev=curr->prev;
            delete curr;
        }
      
      }




    Node *trav= head;
    while(trav){
        cout<<trav->data<<" ";
        trav=trav->next;
    }
}