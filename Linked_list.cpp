#include<iostream>

using namespace std;

struct node{
    node * next;
    int data;
};

node * head , *temp;
void insertFront();

void create(){
    temp = new node;
    temp->next=nullptr;
    cout<<"Enter data :";
    cin>>temp->data;

    if(head==nullptr){
        head=temp;
    }
    else{
        node *p;
        p=head;
        while (p->next!=nullptr)
        {
            p=p->next;
        }
        p->next=temp;

    }
}

void display(){

    node * ptr = head;
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

void insertFront(){
    
}
