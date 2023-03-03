//implement doubly linked list in c program...

#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

struct node{
    int data;
    Node *nxt;
    Node *prv;
};

//create new node for every time in program...
Node *CreateNewNode(int item, Node *nxt, Node *prv){
     Node *newNode = (Node *) malloc(sizeof(Node));
     if(newNode == NULL){
        printf("Error occurred! please try again \n");
        exit(1);
     }
     newNode->data = item;
     newNode->nxt = nxt;
     newNode->prv = prv;
     return newNode;
}

//this is prepend function in linked list...
Node *prepend(Node *head, int item){
    Node *newNode = CreateNewNode(item, head, NULL);
    newNode->nxt->prv = newNode;
    return newNode;
}

//this is my append function in linked list...
Node *append(Node *head, int item){
    Node *newNode = CreateNewNode(item, NULL, NULL);
    if(head == NULL){
        head = newNode;
    }
    Node *current_node = head;
    while(current_node->nxt != NULL){
        current_node = current_node->nxt;
    }
    current_node->nxt = newNode;
    newNode->prv = current_node;
    return head;
}

//print linked list...
void print_list(Node *head){
    while(head != NULL){
        printf("%d ", head->data);
        head = head->nxt;
    }
    printf("\n");
}

int main() {
    Node *n1, *head;

    head = CreateNewNode(10, NULL, NULL);
    head = prepend(head, 20);
    head = prepend(head, 30);
    head = prepend(head, 40);
    head = append(head, 100);

    print_list(head);

return 0;
}
