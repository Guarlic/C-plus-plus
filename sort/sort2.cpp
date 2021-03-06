#include <cstdio>
#include <array>
#include <algorithm>

struct Student {
    char name[20];
    int coding;
    int math;
};

bool rule(Student a, Student b) {
    if (a.coding == b.coding) return a.math > b.math;
    return a.coding > b.coding;
}

int main() {
    std::array<Student, 4> ar;

    for (int i = 0; i < 4; i++)
        scanf("%s%d%d", ar[i].name, &ar[i].coding, &ar[i].math);

    std::sort(ar.begin(), ar.end(), rule);
    printf("\n");

    for (int i = 0; i < 4; i++)
        printf("%s %d %d\n", ar[i].name, ar[i].coding, ar[i].math);

    return 0;
}
