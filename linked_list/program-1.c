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

//this is my prepend function...
Node *prepend(Node *head, int item){
    Node *newNode = createNewNode(head, item);
    return newNode;
}

int main() {
    Node *n1, *n2, *head, *n3, *n4;
    n1 = createNewNode(NULL, 10);
    head = n1;
    head = prepend(head, 20);
    head = prepend(head, 30);

    n2 = head;
    n3 = n2->next;
    n4 = n3->next;
    printf("%d ", n2->data);
    printf("%d ", n3->data);
    printf("%d ", n4->data);

return 0;
}