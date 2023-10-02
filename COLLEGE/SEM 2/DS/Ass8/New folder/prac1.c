// C program to demonstrate insert operation
// in binary search tree.

#include <stdio.h>
#include <stdlib.h>

struct node {
    int key;
    struct node *left, *right;
};

// A utility function to create a new BST node
struct node* newNode(int item)
{
    struct node* temp
    = (struct node*)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

// A utility function to do inorder traversal of BST
int inorder(struct node* root,int sum)
{
    
    sum+=root->key;
    if (root != NULL) {
        inorder(root->left,sum);
        printf("%d ", root->key);
        inorder(root->right,sum);
    }
    return sum;
}

// A utility function to do preorder traversal of BST
void preorder(struct node* root)
{
    if (root != NULL) {
        printf("%d ", root->key);
        preorder(root->left);
        preorder(root->right);
    }
    
}

// A utility function to do postorder traversal of BST
void postorder(struct node* root)
{
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->key);
    }
    
}



// A utility function to insert
// a new node with given key in BST
struct node* insert(struct node* node, int key)
{
    // If the tree is empty, return a new node
    if (node == NULL)
        return newNode(key);
    
    // Otherwise, recur down the tree
    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    
    // Return the (unchanged) node pointer
    return node;
}

// Driver Code
int main()
{
    struct node* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    
    // Print inoder traversal of the BST
    printf("Sum = %d \n",inorder(root,0));
    printf("\n");
    preorder(root);
     printf("\n");
    postorder(root);
     printf("\n");
    
    return 0;
}