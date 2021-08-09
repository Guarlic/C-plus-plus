#include <cstdio>

void echo(int num) {
    printf("%d\n", num);
    if (num <= 1) return;
    echo(num - 1);
}

int main() {
    int num;

    printf("Inser num: ");
    scanf("%d", &num);

    echo(num);

    return 0;
}
