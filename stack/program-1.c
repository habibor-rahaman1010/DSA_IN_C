//stack implement in c program...

#include <stdio.h>

#define STACK_MAX 100

typedef struct {
    int top;
    int data[STACK_MAX];
} Stack;

void push(Stack *s, int item){
    if(s->top < STACK_MAX){
        s->data[s->top] = item;
        s->top = s->top + 1;
    }
    else{
        printf("Stack is full! \n");
    }
}

void pop(Stack *s){
    if(s->top == 0){
        printf("Stack is empty! \n");
        return;
    }
    else{
        s->data[s->top] = 0;
        s->top = s->top - 1;
    }
}

int top(Stack *s){
    if(s->top == 0){
        printf("Stack is empty! \n");
        return -1;
    }
    else{
        return s->data[s->top];
    }
}

int main() {
    Stack st;
    st.top = 0;

    push(&st, 10);
    push(&st, 20);
    push(&st, 30);
    push(&st, 40);

    printf("%d", top(&st));

return 0;
}
