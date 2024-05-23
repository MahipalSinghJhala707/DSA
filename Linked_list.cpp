#include<iostream>

using namespace std;

struct node{
    node * next;
    int data;
};


int count=0;
node * head , *temp;
void insertFront();
void insertEnd();
void insertMiddle();

void create(){
    count++;
    temp = new node;
    temp->next=nullptr;
    cout<<"Enter data :";
    cin>>temp->data;
}

void display(){

    node * ptr = head;
    while(ptr!=nullptr){
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}

int main(){
    insertMiddle();
    insertMiddle();
    insertMiddle();
    insertMiddle();

    display();
}

void insertFront(){
    create();
    if(head==nullptr){
        head=temp;
    }
    else{
        temp->next=head;
        head=temp;
    }
}

void insertEnd(){
    create();
    if(head==nullptr){
        head=temp;
    }
    else{
        node *ptr = head;
        while(ptr->next!=nullptr){
            ptr=ptr->next;
        }
        ptr->next=temp;
    }

}

void insertMiddle(){
    cout<<"Enter the position to insert the new element";
    int i;
    cin>>i;
    if (i==1){
        insertFront();
        return;
    }
    else if(i==count+1){
        insertEnd();
        }
    else if(i>1 && i<count){
        node * ptr = head;
        while (i--)
        {
            ptr=ptr->next;
        }
        temp->next=ptr->next;
        ptr->next=temp;
    }
    else {
        cout<<"Enter a valid position";
    }
}
