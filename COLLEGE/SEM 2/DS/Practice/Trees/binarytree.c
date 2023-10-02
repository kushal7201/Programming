#include<stdio.h>
#include<malloc.h>

typedef struct node
{
    int data;
    struct node  *left, *right;

}tree;

struct node* newNode(int item)
{
    struct node* temp
    = (struct node*)malloc(sizeof(struct node));
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
}

tree* insertnode(tree*root, int value){
    if(root== NULL){
        root = (tree*)malloc(sizeof(tree));
        root->data = value;
        root->right = root->left = NULL;
        return root;
    }
    
    if(root->data<value)
    root->right = insertnode(root->right, value);
    else if(root->data>value) root->left = insertnode(root->left, value);
    
    return root;
}

void preorder(tree*root){ // NLR
    if(root!=NULL){
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
    }
}
void inorder(tree*root){ // LNR
    if(root!=NULL){
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
    }
}
void postorder(tree*root){ // LRN
    if(root!=NULL){
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
    }
}

void printbinarytree(tree*root, int space){
    if(root==NULL) return;
    space+=10;
    printbinarytree(root->right,space);
    printf("\n");
    for(int i =10; i<space; i++) printf(" ");
    printf("%d", root->data);
    printbinarytree(root->left, space);
}

tree* deletesmallest(tree*root){
    if(root->left==NULL){
        if(root->right!=NULL){
            root = root->right;
        }
        else root = NULL;
    }
    else{
        root->left = deletesmallest(root->left);
    }
    return root;
}
// tree* inordersuc(tree*root, tree*p){
//     tree* succesor = NULL;
//     while(root!=NULL){
//         if(p->data>=root->data)
//         root = root->right;
//         else{
//             succesor = root;
//             root = root->left;
//         }
//     }
//     return succesor;
// }
tree* inordersuc(tree* root, tree* node){
    tree* succesor = NULL;
    while(root!=NULL){
        if(root->data>node->data){
            succesor = root;
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    return succesor;
}


// tree* delelment(tree* root, tree* node){
//     if(root==NULL) return root;
//     if(root->data>node->data) root->left = delelment(root->left, node);
//     else if(root->data<node->data) root->right = delelment(root->right, node);
//     else{
//         if(root->left==NULL){
//             tree* temp = root->right;
//             free(root);
//             return temp;
//         }
//         else if(root->right==NULL){
//             tree* temp = root->left;
//             free(root);
//             return temp;
//         }
//         tree* temp = inordersuc(root->right, node);
//         root->data = temp->data;
//         root->right = delelment(root->right, temp);
//     }
//     return root;
// }

tree* delelement(tree* root, tree* node){
    if(root->data>node->data) root->left = delelement(root->left, node);
    else if(root->data<node->data) root->right = delelement(root->right, node);
    else{
        if(root->right==NULL){
            tree* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->left==NULL){
            tree* temp = root->left;
            free(root);
            return temp;
        }
        else{
            
            tree* temp = inordersuc(root->right, node);
            root->data = temp->data;
            root->right = delelement(root->right, temp);
        }
    }
    return root;
}

// code to find a number in the binary tree, printf found else not found

tree* findnodewiththedata(tree* root, int value){
    if(root==NULL) return NULL;
    if(root->data==value) return root;
    tree* temp = findnodewiththedata(root->left, value);
    if(temp!=NULL) return temp;
    temp = findnodewiththedata(root->right, value);
    return temp;
}
int max(int a, int b){
    if(a>b) return a;
    else return b;
}
int height(tree* root){
    if(root==NULL) return 0;
    return 1+max(height(root->left), height(root->right));
}
tree* rightrotate(tree* root){
    tree* temp = root->left;
    root->left = temp->right;
    temp->right = root;
    return temp;
}

tree* leftrotate(tree* root){
    tree* temp = root->right;
    root->right = temp->left;
    temp->left = root;
    return temp;
}

tree* converttoavl(tree* root){
    if(root==NULL) return NULL;
    root->left = converttoavl(root->left);
    tree* delelment(tree* root, tree* node){
    if(root==NULL) return root;
    if(root->data>node->data) root->left = delelment(root->left, node);
    else if(root->data<node->data) root->right = delelment(root->right, node);
    else{
        if(root->left==NULL){
            tree* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){
            tree* temp = root->left;
            free(root);
            return temp;
        }
        tree* temp = inordersuc(root->right, node);
        root->data = temp->data;
        root->right = delelment(root->right, temp);
    }
    return root;
    }
    root->right = converttoavl(root->right);
    int balance = height(root->left)-height(root->right);
    if(balance>1){
        if(height(root->left->left)>=height(root->left->right)){
            root = rightrotate(root);
        }
        else{
            root->left = leftrotate(root->left);
            root = rightrotate(root);
        }
    }
    else if(balance<-1){
        if(height(root->right->right)>=height(root->right->left)){
            root = leftrotate(root);
        }
        else{
            root->right = rightrotate(root->right);
            root = leftrotate(root);
        }
    }
    return root;
}
int main()
{
    tree*root = NULL;
    root = insertnode(root,5);
    // insertnode(root, 300);
    // insertnode(root, 230);
    // insertnode(root, 430);
    // insertnode(root, 490);
    // insertnode(root, 410);
    // insertnode(root, 610);
    // insertnode(root, 150);
    // insertnode(root, 160);
    // insertnode(root, 170);
    // insertnode(root, 270);
    // insertnode(root, 365);
    insertnode(root, 8);
    insertnode(root, 2);
    insertnode(root, 7);
    insertnode(root, 1);
    insertnode(root, 4);
    insertnode(root, 3);
    insertnode(root, 6);
    // preorder(root);
    // printf("\n");
    inorder(root);
    printf("\n");
    // postorder(root);
    // printf("\n");
    // deletesmallest(root);
    //printbinarytree(root, 0);
    // printf("%d",inordersuc(root, root->right)->data);
    // tree* node = findnodewiththedata(root, 300);
    // printf("%d", node->data);
    // delelment(root,node);
    printf("\n");
    //converttoavl(root);
    //printbinarytree(root,  0);
    // printbinarytree(root, 0);// maja aa gaya // kya baat hai // dil khush kar diya // kaam ho gaya
    tree* temp = findnodewiththedata(root, 40);
    if(temp->data==40) printf("F%d",temp->data);
    else printf("FY");
    return 0;
}