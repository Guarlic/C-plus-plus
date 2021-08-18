#include <cstdio>
#include <cstring>

void MyGet(const char*, void*);

int main() {
    int x;

    printf("Test. ");
    MyGet("%d", &x);
    
    printf("%d\n", x);

    return 0;
}

void MyGet(const char* Text, void* Var) {
    const int TextLen = strlen(Text);

    for (int i = 0; i < TextLen; i++) {
        if (Text[i] == '%') {
            switch (Text[i + 1]) {
                case 'd':
                    scanf("%d", (int*) Var);
                    break;
                case 'f':
                    scanf("%f", (float*) Var);
                    break;
                case 'c':
                    scanf("%c", (char*) Var);
                    break;
            }
        }
    }
}
