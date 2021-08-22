#include <cstdio>

class User {
public:
    char id[30];
    char pswd[30];
};

void Sputnget(const char* Text, char* Var) {
    printf("%s", Text);
    scanf("%s", Var);
}

int main() {
    FILE* fp;
    User user[3];
    char temp;
    fp = fopen("info.txt", "wr");

    printf("* 이전 데이터 -----\n");
    while (fscanf(fp, "%c", &temp) != EOF) {
        printf("%c", temp);
    }

    printf("\n* 데이터 입력 -----\n");
    for (int i = 0; i < 3; i++) {
        Sputnget("ID: ", user[i].id);
        Sputnget("Password: ", user[i].pswd);

        fprintf(fp, "%s %s\n", user[i].id, user[i].pswd);
    }

    fclose(fp);
    return 0;
}
