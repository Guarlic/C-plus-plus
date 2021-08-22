#include <cstdio>

int main() {
    FILE* fp;
    char input;
    char string[100];

    scanf("%s", string);

    fp = fopen(string, "r");

    if (fp == NULL) {
        printf("Error; 존재하지 않는 파일입니다: \"%s\"\n", string);
        return 0;
    }

    while (fscanf(fp, "%c", &input) != EOF)
        printf("%c", input);

    fclose(fp);
    return 0;
}
