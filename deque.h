#ifndef DEQUE_H
#define DEQUE_H

typedef struct Node {
    int x;
    int y;
    struct Node* next;
    struct Node* prev;
} Node;

typedef struct Deque {
    Node* head;
    Node* tail;
} Deque;

Node* init_node(int x, int y);
Deque* init_deque();
void push_front(Deque* deque, int x, int y);
void push_back(Deque* deque, int x, int y);
void pop_front(Deque* deque);
void pop_back(Deque* deque);

#endif