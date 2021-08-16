#include <cstdio>

struct node {
    node* next;
    int data;
    char data2;
};

int main() {
    node* head = new node;

    node* node1 = new node;
    node* node3 = new node;

    head->next = node1;
    node1->data = 10;
    node1->data2 = 'a';
    node1->next = node3;
    node3->data = 20;
    node3->data2 = 'b';
    node3->next = NULL;

    node* node2 = new node;
    node1->next = node2;
    node2->data = 30;
    node2->data2 = 'c';
    node2->next = node3;

    node* curr = head->next;

    while (curr != NULL) {
        printf("%d %c\n", curr->data, curr->data2);
        curr = curr->next;
    }

    delete head;
    delete node1;
    delete node2;
    delete node3;

    return 0;
}
