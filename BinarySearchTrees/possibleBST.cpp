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

vector<Node*> constructTrees(int start, int end){
    vector<Node*> trees;
    if(start>end){
        trees.push_back(NULL);
        return trees;
    }

    for(int i=start;i<=end;i++){
        vector<Node*> leftSubTrees = constructTrees(start,i-1);
        vector<Node*> rightSubTrees = constructTrees(i+1,end);
        for(int j=0;j<leftSubTrees.size();j++){
            Node* l = leftSubTrees[j];
            for(int k=0;k<rightSubTrees.size();k++){
                Node* r = rightSubTrees[k];
                Node* node = new Node(i);
                node->left = l;
                node->right = r;
                trees.push_back(node);
            }
        }
    }
    return trees;
}

void preorderPrint(Node* root){

    if(root == NULL) return ;
    
    cout << root->data << " ";
    preorderPrint(root->left);
    preorderPrint(root->right);
}
int main(){

    vector<Node*> trees = constructTrees(1,3);
    for(int i=0;i<trees.size();i++){
        preorderPrint(trees[i]);
        cout << endl;
    }
    return 0;
}
