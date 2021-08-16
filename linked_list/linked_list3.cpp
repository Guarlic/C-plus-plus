#include <cstdio>

struct Node {
    Node* prev;
    Node* next;
    int data;
};

int main() {
    Node* head = new Node;
    Node* node1 = new Node;
    Node* node2 = new Node;
    Node* node3 = new Node;
    Node* tail = new Node;

    head->next = node1;
    node1->data = 10;
    node1->prev = NULL;
    node1->next = node2;
    node2->data = 20;
    node2->prev = node1;
    node2->next = node3;
    node3->data = 30;
    node3->prev = node2;
    node3->next = NULL;
    tail->prev = node3;

    Node* curr = head->next;
    Node* curr2 = tail->prev;

    while (curr != NULL && curr2 != NULL) {
        printf("%d %d\n", curr->data, curr2->data);

        curr = curr->next;
        curr2 = curr2->prev;
    }

    delete head;
    delete node1;
    delete node2;
    delete node3;
    delete tail;

    return 0;
}
