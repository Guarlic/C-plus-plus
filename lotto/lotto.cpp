#include <cstdio>
#include <cstdlib>
#include <array>
#include <algorithm>

using namespace std;

int main() {
    srand(time(0));
    
    array<int, 6> lotto;
    
    for (int i = 0; i < 6; i++) {
        lotto[i] = rand() % 45 + 1;
        
        for (int j = 0; j < 6; j++) {
            if (lotto[j] == lotto[i] && j != i) {
                lotto[i] = rand() % 45 + 1;
                
                continue;
            }
        }
    }
    
    sort(lotto.begin(), lotto.end());
    
    for (int i = 0; i < 6; i++) {
        printf("%d ", lotto[i]);
    }
    
    printf("\n");
    
    return 0;
}
