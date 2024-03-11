#include "deque.h"
#include <stdlib.h>

Node* init_node(int x, int y) {
    Node* newNode = malloc(sizeof(Node));
    newNode->x = x;
    newNode->y = y;
    return newNode;
}

/* 
Don't think I need this
*/

// Deque* init_deque() {
//     Deque* deque = malloc(sizeof(Deque));
//     deque->head = NULL;
//     deque->tail = NULL;
//     return deque;
// }

void push_back(Deque* deque, int x, int y) {
    Node* newNode = init_node(x, y);
    newNode->prev = deque->tail;
    if (deque->tail) {
        deque->tail->next = newNode;
    } else {
        deque->head = newNode;
    }
    deque->tail = newNode;
}

void push_front(Deque* deque, int x, int y) {
    Node* newNode = init_node(x, y);
    newNode->next = deque->head;
    newNode->prev = NULL;
    if (deque->head) {
        deque->head->prev = newNode;
    } else {
        deque->tail = newNode;
    }
    deque->head = newNode;
}

/*
Currently not keeping track of the node that is popped.
May need to keep track in the future.
*/
void pop_front(Deque* deque) {
    if (deque->head == NULL) {
        return;
    }
    Node* temp = deque->head;
    deque->head = deque->head->next;
    if (deque->head) {
        deque->head->prev = NULL;
    } else {
        deque->tail = NULL;
    }
    free(temp);
}

void pop_back(Deque* deque) {
    if (deque->tail == NULL) {
        return;
    }

    Node* temp = deque->tail;
    deque->tail = deque->tail->prev;
    if (deque->tail) {
        deque->tail->next = NULL;
    } else {
        deque->head = NULL;
    }
    free(temp);
}