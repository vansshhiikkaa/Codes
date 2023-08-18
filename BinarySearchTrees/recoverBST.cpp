#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left, *right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void calcPointer(Node* root, Node** first, Node** mid, Node** last, Node** prev){

    if(root == NULL) return ;

    calcPointer(root->left,first,mid,last,prev);
    if(*prev && root->data < (*prev)->data){
        if(!(*first)){
            *first = *prev;
            *mid = root;
        }else{
            *last = root;
        }
    }
    *prev = root;
    calcPointer(root->right,first,mid,last,prev);
}

void restoreBST(Node* root){
    Node *first, *mid, *last, *prev;
    first = NULL;
    mid = NULL;
    last = NULL;
    prev = NULL;
    calcPointer(root,&first,&mid,&last,&prev);

    //case 1
    if(first && last){
        swap(&(first->data), &(last->data));
       
    } else if(first && mid){
            swap(&(first->data), &(mid->data));
        }
}

void inorderPrint(Node* root){
    if(root == NULL) return ;

    inorderPrint(root->left);
    cout << root->data << " ";
    inorderPrint(root->right);
}
int main(){

    /*
         2
         /\
        3  1
            \
             5
          
    */
    Node* root = new Node(2);
    root->left = new Node(3);
    root->right = new Node(1);
    
    root->right->right = new Node(5);

    inorderPrint(root);
    cout << endl;
    
    restoreBST(root);

    inorderPrint(root);



    
}