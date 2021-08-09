#include <cstdio>

void sci(char* txt, int* var) {
    printf("%s", txt);
    scanf("%d", var);
}

void swap(int* n, int* m) {
    int temp = *n;
    *n = *m;
    *m = temp;
}

int main() {
    int x;
    int y;

    printf("Input ---\n");

    sci("x: ", &x);
    sci("y: ", &y);

    swap(&x, &y);

    printf("swap ---\n");

    printf("x: %d\ny: %d\n", x, y);

    return 0;
}
