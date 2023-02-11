#include<stdio.h>
#include<stdlib.h>
struct Node{
    int key;
    struct Node*left;
    struct Node*right;
    int height;
};
int getheight(struct Node*n){
    if(n==NULL){
        return 0;
    }
    else
    {
        return n->height;
    }   
}
struct Node*createNode(int key){
    struct Node*node=(struct Node*)malloc(sizeof(struct Node));
    node->key=key;
    node->left=NULL;
    node->right=NULL;
    node->height=1;
    return node;

}
int getBalanceFactor(struct Node*n){
if(n==NULL){
    return 0;
}
return getHeight(n->left)-getHeight(n->right);

}
struct Node* RightRotate(struct Node*y){
    struct Node*x=y->left;
    struct Node*T2=x->right;
    x->right=y;
    y->left=T2;
    y->height=max(getHeight(y->right),hetHeight(y->left))+1;
    y->height=max(getHeight(x->right),hetHeight(x->left))+1;
    return x;
}
struct Node* LeftRotate(struct Node*x){
    struct Node*y=x->right;
    struct Node*T2=y->left;
    x->right=T2;
    y->left=x;
    y->height=max(getHeight(y->right),hetHeight(y->left))+1;
    y->height=max(getHeight(x->right),hetHeight(x->left))+1;
    return y;
}
struct Node*insert(struct Node* node,int key){
    if (node==NULL)
    {
        return(createNode(key));
    }
    if(key<node->key){
    node->left=insert(node->left,key);
    }
    else if (key>node->key)
    {
        node->right=insert(node->right,key);
        return node;
    }
    node->height=1+max(getHeight(node->right),getHeight(node->right));
    int bf=getBalanceFactor(node);
    //left left case
    if(bf>1&&key<node->left->key){
        RightRotate(node);
    }
    //right right case
       if(bf<-1 &&key > node->right->key){
        leftRotate(node);
    }
    //left right case
    if(bf>1 &&key > node->left->key){
        node->left=leftRotation(node->left);
        rightRotate(node);
        }
    //right ;left case
        if(bf<-1 &&key < node->right->key){
                node->right=rightRotation(node->left);
        leftRotate(node);
        }
        return node;
}