#include <algorithm>
#include <array>
#include <cstdio>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    
    int num;

    printf("Inser num: ");
    scanf("%d", &num);

    int* ar = new int[num];
    
    for (int i = 0; i < num; i++) {
        ar[i] = rand() % 10 + 1;
    }
    
    sort(ar, ar + num);
    
    for (int i = 0; i < num; i++) {
        printf("%d ", ar[i]);
    }
    
    printf("\n");
    
    return 0;
}
