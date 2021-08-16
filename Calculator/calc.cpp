#include <cstdio>

class Calculator {
public:
    int Num1;
    int Num2;
    int Result;
    char Operator;

    int Calculate() {
        switch (Operator) {
            case '+': Result = Num1 + Num2; break;
            case '-': Result = Num1 - Num2; break;
            case '*': Result = Num1 * Num2; break;
            case '/': Result = Num1 / Num2; break;
        }

        return Result;
    }
};

int main() {
    Calculator calc;
    scanf("%d%c%d", &calc.Num1, &calc.Operator, &calc.Num2);
    printf("Result: %d\n", calc.Calculate());

    return 0;
}
