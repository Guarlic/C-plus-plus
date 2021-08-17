#include "namespace.hpp"

using namespace MyNamespace;

int main() {
    node* head = new node;
    node* node1 = new node;
    node* node2 = new node;

    head->next = node1;
    node1->data = 10;
    node1->data2 = 'a';
    node1->next = node2;
    node2->data = 20;
    node2->data2 = 'b';
    node2->next = NULL;

    node* curr = head->next;

    while (curr != NULL) {
        printf("%d %c\n", curr->data, curr->data2);
        curr = curr->next;
    }

    delete head;
    delete node1;
    delete node2;

    return 0;
}
