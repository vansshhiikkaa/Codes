#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    //constructor
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
bool getpath(Node* root, int key, vector<int> &path){
    if(root == NULL){
        return false;
    }
    path.push_back(root->data);
    if(root->data == key){
        return true;
    }

    if(getpath(root->left,key,path) || getpath(root->right,key,path)){
        return true;
    }

    path.pop_back();
    return false;
}
int lca(Node* root, int n1, int n2){
    vector<int> path1, path2;

if(!getpath(root,n1,path1) || !getpath(root,n2,path2)){
    return -1;
}
    int pc;
    for(pc = 0;pc<path1.size() && path2.size();pc++){
        if(path1[pc] != path2[pc]){
            break;
        }
    }
    return path1[pc-1];
}
//lowest common ancestor
Node* LCA(Node* root, int n1, int n2){
    if(root == NULL){
        return NULL;
    }
    if(root->data == n1 || root->data == n2){
        return root;
    }
    Node* left = LCA(root->left, n1, n2);
    Node* right = LCA(root->right, n1, n2);

    if(left != NULL && right != NULL){
        return root;
    }
    if(left == NULL && right == NULL){
        return NULL;
    }
    if(left!=NULL){
        return LCA(root->left,n1,n2);
    }
    return LCA(root->right,n1,n2);
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
    /    / \
   4    5   6
       /
      7
*/
    root->left->left = new Node(4);
    

    root->right->left = new Node(5);
    root->right->left->left = new Node(7);
    root->right->right = new Node(6);

    int n1 = 7;
    int n2 = 6;
    int l = lca(root,n1,n2);

    if(l == -1){
        cout << "LCA doesn't exist" << endl;
    }
    else{
        cout << "LCA: " << lca(root,n1,n2) << endl;
    }
    
   

    
    
    return 0;
}