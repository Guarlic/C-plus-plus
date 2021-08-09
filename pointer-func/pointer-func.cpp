#include <cstdio>

void sci(char* txt, int* var) {
    printf("%s", txt);
    scanf("%d", var);
}

int main() {
    int x;
    sci("Input x: ", &x);
    printf("result of x: %d\n", x);

    return 0;
}
