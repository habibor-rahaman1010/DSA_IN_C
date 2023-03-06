//Tree implement in c++ program...

#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;
struct node{
    int data;
    Node *left;
    Node *right;
};

Node *CreateNewNode(int item){
    Node *new_node = (Node *) malloc(sizeof(Node));
    new_node->data = item;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

void Add_Left_Child(Node *node, Node *child){
    node->left = child;
}

void Add_Right_Child(Node *node, Node *child){
    node->right = child;
}

Node *Create_Tree(){
    Node *two = CreateNewNode(2);
    Node *seven = CreateNewNode(7);
    Node *nine = CreateNewNode(9);
    Add_Left_Child(two, seven);
    Add_Right_Child(two, nine);

    Node *one = CreateNewNode(1);
    Node *six = CreateNewNode(6);
    Add_Left_Child(seven, one);
    Add_Right_Child(seven, six);

    Node *five = CreateNewNode(5);
    Node *ten = CreateNewNode(10);
    Add_Left_Child(six, five);
    Add_Right_Child(six, ten);

    Node *eight = CreateNewNode(8);
    Add_Right_Child(nine, eight);

    Node *three = CreateNewNode(3);
    Node *four = CreateNewNode(4);
    Add_Left_Child(eight, three);
    Add_Right_Child(eight, four);

    return two;
}

int main(){
    Node *root = Create_Tree();

    printf("%d ", root->left->data);

return 0;
}
