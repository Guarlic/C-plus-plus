#include <cstdio>
#include <array>
#include <algorithm>

using namespace std;

int main() {
    array<int, 6> ar;
    
    for (int i = 0; i < 6; i++) {
        scanf("%d", &ar[i]);
    }
    
    sort(ar.begin(), ar.end());
    
    for (int i = 0; i < 6; i++) {
        printf("%d ", ar[i]);
    }
    
    printf("\n");
   
    return 0;
}
