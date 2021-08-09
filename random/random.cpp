#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <array>
#include <algorithm>

using namespace std;

int main() {
    srand(time(0));
    
    array<int, 10> ar;
    
    for (int i = 0; i < 10; i++) {
        ar[i] = rand() % 10 + 1;
    }
   
    sort(ar.begin(), ar.end());
    
    for (int i = 0; i < 10; i++) {
        printf("%d ", ar[i]); 
    }
    
    printf("\n");
    
    return 0;
}
