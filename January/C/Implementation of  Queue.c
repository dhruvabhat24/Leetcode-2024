#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {
    int value;
    struct Node *next;
} Node;

typedef struct MyQueue {
    struct Node *tail;
    struct Node *head;
    int size;
} MyQueue;

Node *createNode(int value) {
    Node *n = (Node*) malloc(sizeof(Node));
    n->next = NULL;
    n->value = value;
    return n;
}

MyQueue* myQueueCreate() {
    MyQueue *queue = (MyQueue*) malloc(sizeof(MyQueue));
    queue->head = NULL;
    queue->tail = NULL;
    queue->size = 0;

    return queue;
}

void myQueuePush(MyQueue* obj, int x) {
    if (obj != NULL) {
        Node *n = createNode(x);

        if (obj->head == NULL) {
            obj->head = n;
            obj->tail = n;
        }
        else {
            obj->tail->next = n;
            obj->tail = n;
        }

        obj->size++;
    }
}

int myQueuePop(MyQueue* obj) {
    int removedValue = 0;
    
    if (obj != NULL) {
        if (obj->head != NULL) {
            Node *aux = obj->head;

            if (obj->head == obj->tail) {
                obj->head = obj->tail = NULL;
            }
            else {
                obj->head = obj->head->next;
            }
            removedValue = aux->value;
            free(aux);
        }
    }
    
    return removedValue;     
}

int myQueuePeek(MyQueue* obj) {
    if (obj != NULL) {
        return  obj->head != NULL ? obj->head->value : 0;
    }
    
    return 0;
}

bool myQueueEmpty(MyQueue* obj) {
    if (obj != NULL) {
        return obj->head == NULL;
    }

    return false;
}

void myQueueFree(MyQueue* obj) {
    if (obj != NULL) {
        if (! myQueueEmpty(obj)) {

            while (obj->head != NULL) {
                Node *aux = obj->head;
                obj->head = obj->head->next;
                free(aux);
            }
            
        }
    }
}
