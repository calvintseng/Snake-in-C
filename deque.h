#ifndef deque
#define deque

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

void init_node(Node* node, int x,y int y);
void init_list(Deque* deque);
void push_front(Deque* deque, int x, int y);
void push_back(Deque* deque, int x, int y);
void pop_front(Deque* deque);
void pop_back(Deque* deque);

#endif