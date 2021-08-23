#include <cstdio>

class User {
public:
    char id[30];
    char pswd[30];
};

void Iputnget(const char* Text, int* Var) {
    printf("%s", Text);
    scanf("%d", Var);
}

void Sputnget(const char* Text, char* Var) {
    printf("%s", Text);
    scanf("%s", Var);
}

int main() {
    FILE* fp;
    int cnt;
    int input;
    char temp;
    fp = fopen("info.txt", "r");

    printf("* 이전 데이터 -----\n");
    while (fscanf(fp, "%c", &temp) != EOF) {
        printf("%c", temp);
    }
    
    fclose(fp);
    Iputnget("\n[데이터 모드]\n1) 초기화 2)추가 3)취소\n", &input);
    
    switch (input) {
        case 1:
            fp = fopen("info.txt", "w");
            Iputnget("[초기화]\n1) 나가기 2)데이터 추가\n", &input);
            
            switch (input) {
                case 1:
                    return 0;
                case 2:
                    break;
                default:
                    printf("잘못 입력하셨습니다.\n");
            }

            break;
        case 2:
            fp = fopen("info.txt", "a");
            break;
        case 3:
            return 0;
        default:
            printf("잘못 입력했습니다.\n");
    }

    printf("\n* 데이터 입력 -----\n");
    Iputnget("Num of Users: ", &cnt);

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
