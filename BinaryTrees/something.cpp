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
//count all nodes
int countNodes(Node* root){
    if(root == NULL){
        return 0;
    }
    return countNodes(root->left) + countNodes(root->right) + 1;
}
//sum all nodes
int sumNodes(Node* root){
    if(root == NULL){
        return 0;
    }
    return sumNodes(root->left) + sumNodes(root->right) + root->data;
}
//hieght of a binary tree
//O(n)
int calcHieght(Node* root){
    if(root == NULL){
        return 0;
    }
    int lhieght = calcHieght(root->left);
    int rhieght = calcHieght(root->right);
    return max(lhieght,rhieght) + 1;
}

//diameter is number of nodes in the longest path between any 2 leaves
//max(lefthieght + righthieght + 1, leftdiameter, rightdimeter)
//O(n^2)
int calcdiameter(Node* root){
    if(root == NULL){
        return 0;
    }

    int lhieght = calcHieght(root->left);
    int rhieght = calcHieght(root->right);
    int currdia = lhieght + rhieght + 1;

    int ldia = calcdiameter(root->left);
    int rdia = calcdiameter(root->right);

    return max(currdia , max(ldia, rdia));
}
//O(n)
int calcDiameter(Node* root, int* hieght){
    if(root == NULL){
        *hieght = 0;
        return 0;
    }
    int lh = 0, rh = 0;
    int lDiameter = calcDiameter(root->left,&lh);
    int rDiameter = calcDiameter(root->right,&rh);

    int currDiameter = lh + rh + 1;
    *hieght = max(lh,rh) + 1;

    return max(currDiameter, max(lDiameter,rDiameter));
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

    
    cout << countNodes(root);
    cout << endl;
    cout << sumNodes(root);
    cout << endl;
    cout << calcHieght(root);
    cout << endl;
    cout << calcdiameter(root);
    cout << endl;
    
    //Diameter of Binary Tree ~ optimized
    int height = 0;
    cout<<calcDiameter(root,&height)<<"\n";


    
    
    return 0;
}