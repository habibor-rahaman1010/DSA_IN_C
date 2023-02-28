//linked list implement in c program...

#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;
struct node{
    int data;
    Node *next;
};

//create a new node...
Node *createNewNode(Node *next, int item){
    Node *newNode = (Node *) malloc(sizeof(Node));
    if(newNode == NULL){
        printf("Error! could noed create node try again \n");
        exit(1);
    }
    newNode->data = item;
    newNode->next = next;
    return newNode;
}

int main() {
    Node *n;
    


return 0;
}