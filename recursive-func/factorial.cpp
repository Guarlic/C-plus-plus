#include <cstdio>

int factorial(int num) {
    if (num <= 1) return num;
    
    return factorial(num - 1) * num;
}

int main() {
    int num;
    
    printf("Inser num: ");
    scanf("%d", &num);
    
    printf("%d! = %d\n", num, factorial(num));
    
    return 0;
}
