#include <cstdio>
#include <cstring>

struct Student {
    Student* next;
    Student* prev;
    char name[30];
    int grade;
    int Class;
    int num;
};

void Iputnget(const char* txt, int* var) {
    printf("%s", txt);
    scanf("%d", var);
}

void Sputnget(const char* txt, char* var) {
    printf("%s", txt);
    scanf("%s", var);
}

int main() {
    Student* head = new Student;
    Student* Student1 = new Student;
    Student* Student2 = new Student;
    Student* tail = new Student;

    head->prev = NULL;
    head->next = Student1;

    strcpy(Student1->name, "Student1");
    Student1->grade = 3;
    Student1->Class = 10;
    Student1->num = 9;
    Student1->prev = head;
    Student1->next = Student2;

    strcpy(Student2->name, "Student2");
    Student2->grade = 3;
    Student2->Class = 5;
    Student2->num = 20;
    Student2->prev = Student1;
    Student2->next = tail;

    tail->prev = Student2;
    tail->next = NULL;

    Student* curr = head;
    Student* NewStudent = new Student;
    int location;
    const int SizeofList = 2;

    Iputnget("Location: ", &location);

    for (int i = 0; i < location / SizeofList - 1; i++) {
        curr = curr->next;
    }

    Sputnget("Name: ", NewStudent->name);
    Iputnget("Grade: ", &NewStudent->grade);
    Iputnget("Class: ", &NewStudent->Class);
    Iputnget("Number: ", &NewStudent->num);

    NewStudent->prev = curr;
    NewStudent->next = curr->next;
    curr->next->prev = NewStudent;
    curr->next = NewStudent;

    curr = head->next;

    printf("\n");

    while (curr->next != NULL) {
        printf("* %s's Info ----------\n", curr->name);

        printf("Name: %s\n", curr->name);
        printf("Grade: %d\n", curr->grade);
        printf("Class: %d\n", curr->Class);
        printf("Number: %d\n\n", curr->num);

        curr = curr->next;
    }

    delete head;
    delete Student1;
    delete Student2;
    delete NewStudent;
    delete tail;

    return 0;
}
