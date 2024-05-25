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
    int x;
    do
    {
        cout<<"Enter 1 to insert at front"<<endl;
        cout<<"Enter 2 to insert at middle"<<endl;
        cout<<"Enter 3 to insert at end"<<endl;
        cout<<"Enter 4 to display"<<endl;
        cin>>x;
        switch (x)
        {
        case 1:
            insertFront();
            break;
        case 2:
            insertMiddle();
            break;
        case 3:
            insertEnd();
            break;
        case 4:
            display();
            break;
        default:
            break;
        }
        

    } while (x!=-1);
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
