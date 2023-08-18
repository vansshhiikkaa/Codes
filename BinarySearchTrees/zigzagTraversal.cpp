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

void zigZagTraversal(Node* root){
    if(root == NULL) return ;
    stack<Node*> currlevel,nextlevel;
    bool leftToRight = true;

    currlevel.push(root);

    while(!currlevel.empty()){
        Node* temp = currlevel.top();
        currlevel.pop();
        if(temp){
            cout << temp->data << " ";
            
            if(leftToRight){
                if(temp->left) nextlevel.push(temp->left);
                if(temp->right) nextlevel.push(temp->right);
            }else{
                if(temp->right) nextlevel.push(temp->right);
                if(temp->left) nextlevel.push(temp->left);
            
            }
        }
        if(currlevel.empty()){
            leftToRight = !leftToRight;
            swap(currlevel,nextlevel);
        }
    }
    
}
int main(){

    /*
         1
         /\
        2  3
         \  \
          4  5
          /\
         6  7
    
    */
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(4);
    root->right->right = new Node(5);
    root->left->right->left = new Node(6);
    root->left->right->right = new Node(7);

    zigZagTraversal(root);


;
}