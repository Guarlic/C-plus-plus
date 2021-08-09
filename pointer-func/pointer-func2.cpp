#include <cstdio>

void scs(char* txt, char* var) {
    printf("%s", txt);
    scanf("%s", var);
}

int main() {
    char str[100];
    scs("Input str: ", str);
    printf("%s\n", str);

    return 0;
}
