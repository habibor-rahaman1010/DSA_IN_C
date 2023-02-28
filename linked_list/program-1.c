//linked list implement in c program...

#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;
struct node{
    int data;
    Node *next;
};

//create a new node...
Node *createNewNode(int item, Node *next){
    Node *newNode = (Node *) malloc(sizeof(Node));
    if(newNode == NULL){
        printf("Error! could node create node try again \n");
        exit(1);
    }
    newNode->data = item;
    newNode->next = next;
    return newNode;
}

//this is my prepend function...
Node *prepend(Node *head, int item){
    Node *newNode = createNewNode(item, head);
    return newNode;
}

//this is my append function...
Node *append(Node *head, int item){
    Node *newNode = createNewNode(item, NULL);
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

//search data in linked list...
int Search(Node *head, int item){
    int findeNode = 0;
    Node *a = head;
    while(a != NULL){
        if(a->data == item){
            return findeNode;
            break;
        }
        findeNode++;
        a = a->next;
    }
    return -1;
}

//node count function in linked list
int nodeCount(Node *head){
    Node *current_Node = head;
    int nodes = 0;
    while(current_Node != NULL){
        nodes++;
        current_Node = current_Node->next;
    }
    return nodes;
}

//print linked list
void print_linked_list(Node *head){
    Node *currrent_node = head;
    while(currrent_node != NULL){
        printf("%d ", currrent_node->data);
        currrent_node = currrent_node->next;
    }
}

int main() {
    Node *head;
    head = createNewNode(10, NULL);
    head = prepend(head, 20);
    head = prepend(head, 50);
    head = prepend(head, 30);
    head = append(head, 40);


    print_linked_list(head);
    printf("\n");
    printf("Total Nodes: %d ", nodeCount(head));
    printf("\n");
    printf("Search item: %d ", Search(head, 40));

return 0;
}
