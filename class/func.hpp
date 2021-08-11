#pragma once
#ifndef func_hpp
#define func_hpp
#include <cstdio>

void sci(char* txt, int* var) {
   printf("%s", txt);
   scanf("%d", var);
}

void scs(char* txt, char* var) {
    printf("%s", txt);
    scanf("%s", var);
}

#endif 
