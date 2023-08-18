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
int maxPathUtil(Node* root, int &ans){
    if(root == NULL){
        return 0;
    }
    int left = maxPathUtil(root->left, ans);
    int right = maxPathUtil(root->right, ans);

    int nodeMax = max(max(root->data,root->data + left + right),max(root->data + left, root->data + right));
    ans = max(ans, nodeMax);
    int singlepathsum = max(root->data, max(root->data + left, root->data + right));
    return singlepathsum;

}
int maxPathSum(Node *root){
    int ans = INT_MIN;
    maxPathUtil(root,ans);
    return ans;
}

int main()
{ 
    Node* root = new Node(1);
    root->left = new Node(-12);
    root->right = new Node(3);
    /*
       1
      /  \
   -12    3
    /    / \
   4    5   -6
       
      
*/
    root->left->left = new Node(4);
    

    root->right->left = new Node(5);
    ;
    root->right->right = new Node(-6);

   
   cout << maxPathSum(root);

    
    
    return 0;
}