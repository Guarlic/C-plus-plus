#include <algorithm>
#include <array>
#include <cstdio>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    
    int n;
    int m;

    printf("Inser num of random-nums: ");
    scanf("%d", &n);
    printf("Insert num of random(1~n): ");
    scanf("%d", &m);

    int* ar = new int[n];
    
    for (int i = 0; i < n; i++) {
        ar[i] = rand() % m + 1;
    }
    
    sort(ar, ar + n);
    
    for (int i = 0; i < n; i++) {
        printf("%d ", ar[i]);
    }
    
    printf("\n");
    
    return 0;
}
