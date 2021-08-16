#include <cstdio>

struct node {
    node* next;
    node* prev;
    int data;
};

int main() {
    node* head = new node;
    node* node1 = new node;
    node* node2 = new node;
    node* node3 = new node;
    node* tail = new node;

    head->next = node1;
    node1->data = 10;
    node1->prev = head;
    node1->next = node2;
    node2->data = 20;
    node2->prev = node1;
    node2->next = tail;
    tail->prev = node2;
    tail->next = NULL;

    int input;
    int input2;
    node* curr = head;

    scanf("%d%d", &input, &input2);

    for (int i = 0; i < input - 1; i++) {
        curr = curr->next;
    }

    node3->data = input2;
    node3->next = curr->next;
    curr->next->prev = node3;
    curr->next = node3;
    node3->prev = curr;
    
    curr = head->next;

    while (curr->next != NULL) {
        printf("%d\n", curr->data);
        curr = curr->next;
    }

    delete head;
    delete node1;
    delete node2;
    delete node3;
    delete tail;

    return 0;
}
