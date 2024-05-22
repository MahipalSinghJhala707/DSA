#include <iostream>
using namespace std;


typedef struct tree
{   
    int data;
    struct tree* right;
    struct tree* left;

}tree;

tree *temp, *root;

void in_Order(tree *);
void pre_Order(tree *);
void post_Order(tree *);
void create(){
    temp = new tree;
    cout<<"Enter the data :";
    cin>>temp->data;
    temp->left = temp->right = nullptr;
    if(root==nullptr)
        root=temp;
    else{
        tree *p, *q;
        p=root;
        while (p!=nullptr)
        {
            q=p;
            if(p->data > temp->data)
                p=p->left;
            else
                p=p->right;
        }
        if(q->data > temp->data)
            q->left=temp;
        else
            q->right=temp;
    }
}
int main(){
    int x;
    // do
    // {
    //     cout<<"Enter 1 to create tree";
    //     cin>>x;

    // } while (x!=-1);
    create();
    create();
    create();
    create();
    create();
    create();
    create();
    create();
    create();
    in_Order(root);
    cout<<endl;
    pre_Order(root);
    cout<<endl;
    post_Order(root);
    cout<<endl;
    return 0;

}

void in_Order(tree *p){
    if(p!=nullptr){
        in_Order(p->left);
        cout<<p->data<<"  ";
        in_Order(p->right);
    }

}
void post_Order(tree *p){
    if(p!=nullptr){
        post_Order(p->left);
        post_Order(p->right);
        cout<<p->data<<"  ";
    }
}
void pre_Order(tree *p){
    if(p!=nullptr){
        cout<<p->data<<"  ";
        pre_Order(p->left);
        pre_Order(p->right);
    }
}

