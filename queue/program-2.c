//queue implement in c++ program...

#include <stdio.h>
#define Q_SIZE 5

typedef struct{
    int data[Q_SIZE + 1];
    int head;
    int tail;
}Queue;

void Enqueue(Queue *q, int item){
    if((q->tail + 1) % (Q_SIZE + 1) == q->head){
        printf("Queue is full \n");
        return;
    }
    q->data[q->tail] = item;
    q->tail = (q->tail + 1) % (Q_SIZE + 1);
}

int Dequeue(Queue *q) {
    int item;
    if(q->tail == q->head){
        printf("Queue is empty \n");
        return -1;
    }
    item = q->data[q->head];
    q->head = (q->head + 1) % (Q_SIZE + 1);
    return item;
}

void print_queue(Queue *q){
    int i = 0;
    while(q->head != q->tail){
        printf("%d ", q->data[i]);
        i++;
        q->head = (q->head + 1) % (Q_SIZE + 1);
    }
}

int main (){
    Queue que;

    que.head = 0;
    que.tail = 0;

    Enqueue(&que, 1);
    Enqueue(&que, 5);
    Enqueue(&que, 3);
    Enqueue(&que, 2);
    Enqueue(&que, 7);

    Dequeue(&que);
    Dequeue(&que);
    
    print_queue(&que);

return 0;
}