#include "class.hpp"
#include <cstdio>

int main() {
    myClass* mycls = new myClass;

    mycls->x = 3;
    mycls->y = 4;

    printf("%d %d\n", mycls->x, mycls->y);

    return 0;
}
