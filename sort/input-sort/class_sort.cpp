#include <cstdio>
#include <algorithm>

class Student {
public:
    char name[20];
    int score;
};

bool rule(Student a, Student b) { return a.score > b.score; }
void stdt_sort(Student* a, Student* b) { std::sort(a, b, rule); }

int main() {
    Student ar[4];

    for (int i = 0; i < 4; i++)
        scanf("%s%d", ar[i].name, &ar[i].score);

    stdt_sort(ar, ar + 4);
    printf("\n");

    for (int i = 0; i < 4; i++)
        printf("%s %d\n", ar[i].name, ar[i].score);

    return 0;
}
