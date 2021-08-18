#include <cstdio>
#include <cstring>

namespace MyNamespace {
    struct Student {
        char name[30];
        int grade;
        int Class;
        int num;
    };

    struct node {
        node* next;
        Student data;
    };
}

int main() {
    MyNamespace::node* head = new MyNamespace::node;
    MyNamespace::node* node1 = new MyNamespace::node;
    MyNamespace::node* node2 = new MyNamespace::node;
    
    head->next = node1;

    strcpy(node1->data.name, "Student1");
    node1->data.grade = 3;
    node1->data.Class = 9;
    node1->data.num = 10;
    node1->next = node2;

    strcpy(node2->data.name, "Student2");
    node2->data.grade = 4;
    node2->data.Class = 10;
    node2->data.num = 11;
    node2->next = NULL;

    MyNamespace::node* curr = head->next;

    while (curr != NULL) {
        printf("\nName: %s\n", curr->data.name);
        printf("Grade: %d\n", curr->data.grade);
        printf("Class: %d\n", curr->data.Class);
        printf("Number: %d\n\n", curr->data.num);

        curr = curr->next;
    }

    delete head;
    delete node1;
    delete node2;

    return 0;
}
