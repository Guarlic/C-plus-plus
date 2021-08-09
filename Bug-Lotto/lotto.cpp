#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <array>

using namespace std;

int main() {
    srand((unsigned)time(NULL));
    
    array<int, 6> lotto;
    int num;
    
    printf("로또를 몇 장 뽑습니까? ");
    scanf("%d", &num);

    for (int x = 0; x < num; x++) {
        for (int y = 0; y < 5; y++) {
            for (int i = 0; i < 6; i++) {
                lotto[i] = rand() % 45 + 1;
                
                for (int j = 0; j < 6; j++) {
                    if (lotto[j] == lotto[i] && j != i) {
                        lotto[i] = rand() % 45 + 1;
                        
                        continue;
                    }
                }
                
                sort(lotto.begin(), lotto.end());
            }
            
            if (y < 1) printf("* %d번째 장 ------\n", x + 1);
            
            for (int i = 0; i < 6; i++) {
                if (i < 5) printf("%d, ", lotto[i]);
                else printf("%d\n", lotto[i]);
            }
        }
         
        printf("\n");
    }
    
    return 0;
}
