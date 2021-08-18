#include <cstdio>

enum TYPE {
    _int,
    _float
};

void swap(TYPE, void*, void*);

int main() {
    int a = 3;
    int b = 4;
    float c = 3.14;
    float d = 4.14;

    swap(_int, &a, &b);
    swap(_float, &c, &d);

    printf("%d %d\n", a, b);
    printf("%.2f %.2f\n", c, d);

    return 0;
}
    
void swap(TYPE Type, void* Var1, void* Var2) {
    switch (Type) {
        case _int:
            int Temp;
            Temp = *(int*) Var1;
            *(int*) Var1 = *(int*) Var2;
            *(int*) Var2 = Temp;

            break;
        case _float:
            float Temp2;
            Temp2 = *(float*) Var1;
            *(float*) Var1 = *(float*) Var2;
            *(float*) Var2 = Temp2;
    }
}
