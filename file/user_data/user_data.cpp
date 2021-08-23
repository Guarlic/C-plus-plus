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
    int cnt;
    char temp;
    fp = fopen("info.txt", "r");

    printf("* 이전 데이터 -----\n");
    while (fscanf(fp, "%c", &temp) != EOF) {
        printf("%c", temp);
    }
    
    fclose(fp);
    fp = fopen("info.txt", "w");

    printf("\n* 데이터 입력 -----\n");
    printf("Num of Users: ");
    scanf("%d", &cnt);

    User* user = new User[cnt];

    for (int i = 0; i < cnt; i++) {
        Sputnget("ID: ", user[i].id);
        Sputnget("Password: ", user[i].pswd);

        fprintf(fp, "%s %s\n", user[i].id, user[i].pswd);
    }

    delete[] user;
    fclose(fp);

    return 0;
}
