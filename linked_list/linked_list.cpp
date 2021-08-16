#include <cstdio>

struct Node {
    Node* next;
    int data;
};

int main() {
    Node* head = new Node;
    Node* node1 = new Node;
    
    head->next = node1;
    node1->data = 10;

    Node* node2 = new Node;
    node1->next = node2;
    node2->data = 20;

    Node* node3 = new Node;
    node2->next = node3;
    node3->data = 30;

    Node* curr = head->next;
    
    while (curr != NULL) {
        printf("%d\n", curr->data);
        curr = curr->next;
    }

    delete head;
    delete node1;
    delete node2;
    delete curr;
    return 0;
}
