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

Node* Createlinekdlist(int arr[],int index,int size){
    if(index==size){
        return NULL;
    }
    Node *temp;
    temp=new Node(arr[index]);
    temp->next=Createlinekdlist(arr,index+1,size);

    return temp;
};





int main(){
    cout<<"delete node"<<endl;

     int arr[]={1,4,6,8};

    Node *Head;
    Head=NULL;

    Head =Createlinekdlist(arr,0,4);


     Node *temp=Head;
    while(temp !=NULL){
        cout<<temp->data<<"-->";
        temp=temp->next;
    }

    // delete node at start -----------------------------------------------------------
/*
    if(Head!=NULL){
        Node *temp = Head;
        Head = Head->next;
        delete temp;
    }

    cout<<"\n Delete First Node"<<endl;
    Node *temp2=Head;
    while(temp2 !=NULL){
        cout<<temp2->data<<"-->";
        temp2=temp2->next;
    }

*/

 
/*
    // delete node at end -----------------------------------------------------------
    if(Head !=NULL){
    //    only one node is present

        if(Head->next==NULL){
            Node *temp=Head;
            delete temp;
            Head=NULL;
        }
        // More than 1 node is present
        else{
                Node *curr=Head;
                Node *prev=NULL;

                while(curr->next!=NULL){
                    prev=curr;
                    curr=curr->next;
                }
                delete curr;
                prev->next=NULL;
        }
        
    }
    cout<<endl<<"Delete Last Node"<<endl;
    Node *temp2=Head;
    while(temp2 !=NULL){
        cout<<temp2->data<<"-->";
        temp2=temp2->next;
    }

*/



// delete particular Node -----------------------------------------------------------          

    cout<<endl<<"delete particular Node"<<endl;
    int x=3;
    if(x==1){
        Node *temp=Head;
        Head= Head->next;
        delete temp;
    }

    x--;
    Node *curr=Head;
    Node *prev=NULL;

    while(x--){
        prev=curr;
        curr = curr->next;
    }
    prev->next=curr->next;
    delete curr;


     Node *temp2=Head;
    while(temp2 !=NULL){
        cout<<temp2->data<<"-->";
        temp2=temp2->next;
    }


}