#include <cstdio>
#include <memory>
#include <cstring>

int main() {
    FILE *fp;
    char string[100];
    int input;
    fp = fopen("test.txt", "r");

    printf("* 이전 내용 -----\n");

    while (fgets(string, sizeof(string), fp) != NULL) {
        printf("%s", string);
        memset(string, 0, sizeof(string));
    }

    fclose(fp);
    fp = fopen("test.txt", "w");

    printf("\n몇 개의 줄을 입력? ");
    scanf("%d", &input);
    
    for (int i = 0; i < input; i++) {
        printf("입력할 내용 (%d번째 줄) ", i + 1);
        memset(string, 0, sizeof(string));
        scanf("%s", string);
        string[strlen(string)] = '\n';

        fputs(string, fp);
    }

    fclose(fp);
    fp = fopen("test.txt", "r");

    printf("\n* 파일 내용 -----\n");
    
    while (fgets(string, sizeof(string), fp) != NULL) {
        printf("%s", string);
        memset(string, 0, sizeof(string));
    }

    fclose(fp);
    return 0;
}
