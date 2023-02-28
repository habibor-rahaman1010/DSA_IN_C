//implement circuler queue in c++ program

#include <stdio.h>
#define Q_size 5

typedef struct{
    int data[Q_size + 1];
    int head;
    int tail;

}Queue;

void enqueue(Queue *q, int item){
    if((q->tail + 1) % (Q_size + 1) == q->head){
        printf("queue is full \n");
        return;
    }
    q->data[q->tail] = item;
    q->tail = (q->tail + 1) % (Q_size + 1);
}

int dequeue(Queue *q){
    int item;
    if(q->tail == q->head){
        printf("Queue is empty \n");
        return -1;
    }
    item = q->data[q->head];
    q->head = (q->head + 1) % (Q_size + 1);
}

void print_queue(Queue *q){
    int i = 0;
    while(q->head != q->tail){
        printf("%d ", q->data[i]);
        i++;
        q->head = (q->head + 1) % (Q_size + 1);
    }
}

int main() {
    Queue que;
    que.head = 0;
    que.tail = 0;

    enqueue(&que, 1);
    enqueue(&que, 5);
    enqueue(&que, 3);
    enqueue(&que, 2);
    enqueue(&que, 7);

    dequeue(&que);
    dequeue(&que);
    
    print_queue(&que);

return 0;
}