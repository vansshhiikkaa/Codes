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

struct Info{
    int min;
    int max;
    int size;
    int ans;
    bool isBST;
};

Info largestBSTinBT(Node* root){
    if(root == NULL){
        return {INT_MAX,INT_MIN,0,0,true};
    }
    if(root->left == NULL && root->right == NULL){
        return {root->data,root->data,1,1,true};
    }

    Info leftInfo = largestBSTinBT(root->left);
    Info rightInfo = largestBSTinBT(root->right);

    Info curr;
    curr.size = (leftInfo.size + rightInfo.size + 1);

    if(leftInfo.isBST && rightInfo.isBST && root->data > leftInfo.max && root->data < rightInfo.min){
        curr.min = min(leftInfo.min, min(rightInfo.min, root->data));
        curr.max = max(rightInfo.max, max(leftInfo.max, root->data));
        
        curr.ans = curr.size;
        curr.isBST = true;

        return curr;
    }

    curr.ans = max(leftInfo.ans,rightInfo.ans);
    curr.isBST = false;
    return curr;
}


int main(){

    /*
         2
         /\
        1  3
         \  \
          4  5
          /\
         3  7
    
    */
    Node* root = new Node(2);
    root->left = new Node(1);
    root->right = new Node(3);
    root->left->right = new Node(4);
    root->right->right = new Node(5);
    root->left->right->left = new Node(3);
    root->left->right->right = new Node(7);

    cout << largestBSTinBT(root).ans << endl;
}