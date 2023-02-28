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

//this is my append function...
Node *append(Node *head, int item){
    Node *newNode = createNewNode(head, item);
    if(head == NULL){
        return newNode;
    }
    Node *current_node = head;
    while(current_node->next != NULL){
        current_node = current_node->next;
    }
    current_node->next = newNode;
    return head;
}

//print linked list
void print_linked_list(Node *head){
    Node *currrent_node = head;
    while(currrent_node->next != NULL){
        printf("%d ", currrent_node->data);
        currrent_node = currrent_node->next;
    }
}

int main() {
    Node *n1, *head;
    n1 = createNewNode(NULL, 10);
    head = n1;
    head = prepend(head, 20);
  

    print_linked_list(head);

return 0;
}