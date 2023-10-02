#include<stdio.h>
#include<malloc.h>

typedef struct node
{
    int data;
    struct node*left, *right;
}tree;

tree* createnode(tree*node, int value){
    tree* temp = (tree*)malloc(sizeof(tree));
    temp->data = value;
    temp->right= temp->left = NULL;
    return temp;
}

tree* insert(tree* node, int value){
    if(node==NULL)
    return createnode(node, value);
    else{
        if(node->data>value){
            node->left = insert(node->left, value);
        }
        else if(node->data<value){
            node->right = insert(node->right, value);
        }
    }
    return node;
}

void preorder(tree*node){ // NLR
    if(node!=NULL){
        printf("%d ",node->data);
        preorder(node->left);
        preorder(node->right);
    }
}
void inorder(tree*node){ // LNR
    if(node!=NULL){
        inorder(node->left);
        printf("%d ",node->data);
        inorder(node->right);
    }
}
void postorder(tree*node){ // LRN
    if(node!=NULL){
        postorder(node->left);
        postorder(node->right);
        printf("%d ",node->data);
    }
}

void printbiarytree(tree*node, int space){
    if(node==NULL) return;
    else{
        space+=10;
        printbiarytree(node->right, space);
        printf("\n");
        for(int i =10; i<space; i++) printf(" ");
        printf("%d",node->data);
        printbiarytree(node->left, space);
    }
}

tree* delmin(tree*node){
    if(node==NULL) return;
    else{
        node->left = delmin(node->left);
        
    }
}

int main()
{
    tree*root;
    root = createnode(root, 110);
    insert(root, 95);    
    insert(root, 70);    
    insert(root, 189);    
    insert(root, 33);    
    insert(root, 165);    
    insert(root, 70);    
    insert(root, 92);
    insert(root, 200);
    preorder(root);
    printf("\n");
    inorder(root);
    printf("\n");    
    postorder(root);    
    printbiarytree(root,0);
    return 0;
}
