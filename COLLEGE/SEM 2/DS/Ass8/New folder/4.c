#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int key;
    struct node *left, *right;
}tree;

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
void inorder(struct node* root)
{
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
    
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

int addnodes(tree* root){
    if(root==NULL) return 0;
    else
    return root->key+addnodes(root->left)+addnodes(root->right);
}

int depthnode(tree* root){
    if(root==NULL) return 0;
    else{
        return (depthnode(root->left)>depthnode(root->right))? depthnode(root->left)+1:depthnode(root->right)+1;
    }
}

int numnodes(tree* root){
    static int sum = 0;

    if(root== NULL) return 0;
    else{
        sum++;
        numnodes(root->left);
        numnodes(root->right);
    }
    return sum;
}
// Driver Code
int main()
{
    struct node* root = NULL;
    int num;
    printf("Enter the size: ");
    scanf("%d",&num);

    for(int i =0; i<num; i++){
        
    }
    root = insert(root, 50)
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    insert(root, 5);
    
    // Print inoder traversal of the BST
    inorder(root);
    printf("\n");
    preorder(root);
     printf("\n");
    postorder(root);
     printf("\n");
    printf("\n%d\n", addnodes(root));
    printf("\n%d\n",numnodes(root));
    printf("\n%d\n",depthnode(root));
    return 0;
}