#include <cstdio>

void scs(const char* txt, char* var) {
    printf("%s", txt);
    scanf("%s", var);
}

int main() {
    char str[100];
    scs("Input str: ", str);
    printf("result of str: %s\n", str);

    return 0;
}
