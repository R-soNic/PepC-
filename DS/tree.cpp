// Tree
// -> Path of tree :- it is decided with the key value 

// height and depth of the tree 
/*
        //                 depth 0
        //                 height 3
        //                     / \
        //                 /           \   
        //             /                   \
        //     depth 1                 depth 1
        //     height 1                height 2
        //         /       \                       \
        // depth 2         depth 2             depth 2
        // height 0        height 0            height 1
        //                                         /
        //                                 depth 3
        //                                 height 0
// Tree types 
// -> General tree 
// -> Forest 
// -> Binary tree 
        // Tree with each node has at most two child nodes is.
        // full binary tree
        //  -> tree with each node has exactly two or zero child.
        // perfect binary tree
        //  -> completely filled wiht the exception of the lowest level that is filled
        //   from left to right
// -> Binary search tree 
    // -> the nodes to the left are less than root node while the nodes to the right are 
    //     greater than the root node.
        insertion 
            Create 

            Tree Traversal Techniques
                inorder - left root right
                preorder - root left right
                post order - left right root
                level order - level wise from left to right
                -> DFS

                -> BFS
// -> Expression tree

*/
#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node* newNode(int data){
    struct node * node=(struct node*)malloc(sizeof(struct node));
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return (node);
}
int main(){
    struct node *root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    return 0;
}