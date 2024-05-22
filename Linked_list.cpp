#include<iostream>

using namespace std;

struct node{
    node * next;
    int data;
};

node * head = new node;
node * temp = new node;


void create(){
    node * n = new node;
    n->next=nullptr;
    cout<<"Enter the data :";
    cin>>n->data;

    if(head==nullptr){
        head=n;
        temp=n;
    }
    else{
        temp->next=n;
        temp=n;
    }
}

void display(){
    
    node * ptr = new node;
    while(ptr!=nullptr){
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}

int main(){
    create();
    create();
    create();
    create();
    display();

}