#include <cstdio>

// 구조체 정의
struct node {
    node* next;
    node* prev;
    int data;
};

int main() {
    // 구조체들 선언
    node* head = new node;
    node* node1 = new node;
    node* node2 = new node;
    node* node3 = new node;
    node* tail = new node;

    // data, prev, next 에 값 대입
    head->prev = NULL;
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

    // input - 1 만큼 curr을 next로 이동
    for (int i = 0; i < input - 1; i++) {
        curr = curr->next;
    }

    // node3 추가 작업
    node3->data = input2;
    node3->next = curr->next;
    curr->next->prev = node3;
    curr->next = node3;
    node3->prev = curr;
    
    curr = head->next;

    // data들 출력
    while (curr->next != NULL) {
        printf("%d\n", curr->data);
        curr = curr->next;
    }

    // 공간 해제 및 프로그램 종료 (0 반환)
    delete head;
    delete node1;
    delete node2;
    delete node3;
    delete tail;

    return 0;
}
