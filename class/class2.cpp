#include "class2.hpp"
#include <cstdio>

int main() {
    Vector2* p1 = new Vector2;
    Vector3* p2 = new Vector3;
    
    scanf("%d%d", &(p1->x), &(p1->y));
    scanf("%d%d%d", &(p2->x), &(p2->y), &(p2->z));
    
    printf("%d %d\n", p1->x, p1->y);
    printf("%d %d %d\n", p2->x, p2->y, p2->z);
    
    return 0;
}
