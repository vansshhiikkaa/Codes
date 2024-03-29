#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
int height(Node* root){
    if(root == NULL){
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh,rh) + 1;
}
//O(n^2)
bool isBalanced(Node* root){
    if(root == NULL){
        return true;
    }

    if(isBalanced(root->left) == false){ return false;}
    if(isBalanced(root->right) == false){ return false;}

    int lh = height(root->left);
    int rh = height(root->right);

    if(abs(lh-rh) <= 1){ return true;}
    else{ return false;}
}
//O(n)
bool IsBalanced(Node* root, int* height){
    if(root == NULL){
        return true;
    }
    int lh = 0, rh = 0;
    if(IsBalanced(root->left,&lh) == false) return false;
    if(IsBalanced(root->right,&rh) == false) return false;

    *height = max(lh,rh) + 1;
    if(abs(lh - rh) <=1){
        return true;
    }else{
        return false;
    }
}


int main()
{ 
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    /*
       1
      /  \
     2    3
    / \  / \
   4   5 6  7
*/
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);
    int hieght = 0;
    if(IsBalanced(root,&hieght)){
        cout<<"balanced tree\n";
    }else{
        cout<<"not";
    }
   
    
    
    return 0;
}