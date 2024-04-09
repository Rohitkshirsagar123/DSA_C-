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

    //  if(index == size)
    //     return back;

    // Node* temp = new Node(arr[index]);
    // temp->next = back;

    // if(back != NULL)
    //     back->prev = temp;

    // return createDll(arr, index+1, size, temp);
    
}

int main(){
    cout<<"doubly linkedlist using recursion"<<endl ;
    Node *head =NULL;
    int arr[] = {1,2,3,4,5};
    head=createDll(arr,0,5,NULL);

    Node *trav= head;
    while(trav){
        cout<<trav->data<<" ";
        trav=trav->next;
    }
}