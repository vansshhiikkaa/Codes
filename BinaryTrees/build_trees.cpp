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

int search(int inorder[],int start,int end, int curr){
    for(int i=start;i<=end;i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}

void inorderPrint(Node* root){
    if(root == NULL){
        return ;
    }
    inorderPrint(root->left);
    cout << root->data<<" ";
    inorderPrint(root->right);
}

Node* buildTreeFromPreorder(int preorder[], int inorder[], int start, int end){
    static int idx = 0;
    if(start > end){
        return NULL;
    }

    int curr = preorder[idx];
    idx++;
    Node* node = new Node(curr);
    if(start==end){
        return node;
    }

    int pos = search(inorder, start, end, curr);
    node->left = buildTreeFromPreorder(preorder,inorder,start,pos-1);
    node->right = buildTreeFromPreorder(preorder,inorder,pos+1,end);
    return node;
}

Node* buildTreeFromPostorder(int postorder[], int inorder[], int start, int end){
    static int idx = 4;
    if(start > end){
        return NULL;
    }
    int val = postorder[idx];
    idx--;
    Node* curr = new Node(val);
    if(start==end){
        return curr;
    }

    int pos = search(inorder, start, end, val);
    curr->right = buildTreeFromPostorder(postorder, inorder, pos+1, end);
    curr->left = buildTreeFromPostorder(postorder, inorder, start, pos-1);

    return curr;
}

int main()
{
    int preorder[] = {1,2,4,3,5};
    int inorder[] = {4,2,1,5,3};
    int postorder[] = {4,2,5,3,1};

    Node* root = buildTreeFromPreorder(preorder,inorder,0,4);
    inorderPrint(root);
    cout << endl;

    Node* root2 = buildTreeFromPostorder(postorder,inorder,0,4);
    inorderPrint(root2);

     
    return 0;
}