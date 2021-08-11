#include <cstdio>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    
    int answer;
    int guess;
    int turn = 0;
    
    answer = rand() % 100 + 1;
    
    printf("제가 생각한 숫자를 맞춰보세요 (1 ~ 100). ");
    
    while (turn < 10) {
       turn++;
        
       scanf("%d", &guess);
        
       if (guess == answer) {
           printf("정답입니다! (사용한 턴: %d)\n", turn);
            
           break;
       }
       else {
           if (guess > answer) {
               printf("그보다 작습니다!");
           }
           else {
               printf("그보다 큽니다!");
           }
            
           printf(" (현재 사용턴: %d) ", turn);
       }
    }
    
    if (guess != answer) {
        printf("턴을 모두 소진하셨습니다!\n");
        printf("정답은 [%d] 였습니다!\n", answer);
    }
    
    return 0;
}
