#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*left;
    struct node*right;

};
struct node*createNode(int data){
    struct node*n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
}
void preorder(struct node*root){
    if(root!=NULL){
        preorder(root->left);
        preorder(root->right);
        printf("%d \n",root->data);
    }
}
void postOrder(struct node*root){
    if(root!=NULL){
        postOrder(root->right);
          postOrder(root->left);
        printf("%d \n",root->data);
    }
}
void inOrder(struct node*root){
    if (root!=NULL)
    {
        inOrder(root->right);
        printf("%d \n",root->data);
        inOrder(root->left);   
    }
}

int isBST(struct node*root){
   static struct node*prev=NULL;
    if (root!=NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }
        if(prev!=NULL&&root->data<=prev->data){
            return 0;
        }
        prev=root;
        return isBST(root->right);
    }
    else{
        return 1;
    }
}
int main(){
    // struct node*p;
    // p=(struct node*) malloc(sizeof(struct node));
    // p->data=4;
    // p->left=NULL;
    // p->right=NULL;

    // struct node*p1;
    // p1=(struct node*) malloc(sizeof(struct node));
    // p->data=12;
    // p1->left=NULL;
    // p1->right=NULL;


    // struct node*p2;
    // p2=(struct node*) malloc(sizeof(struct node));
    // p->data=11;
    // p2->left=NULL;
    // p2->right=NULL;
    struct node*p=createNode(4);
    struct node*p1=createNode(1);
    struct node*p2=createNode(6);
    struct node*p3=createNode(5);
    struct node*p4=createNode(2);
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    
    printf("printing pre order");
    preorder(p);
    printf("printing post order");
    postOrder(p);
    printf("printing inorderljn");
    inOrder(p);
    printf("%d",isBST(p));
    

}





















