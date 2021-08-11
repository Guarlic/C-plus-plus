#include <cstdio>
#include <cstring>
#include "class3.hpp"
#include "func.hpp"

int main() {
    auto stdt = new Student;
    
    scs("Name: ", stdt->name);
    scs("Gender: ", stdt->gender);
    sci("Grade: ", &(stdt->grade));
    sci("Class: ", &(stdt->Class));
    sci("Number: ", &(stdt->num)); 
    
    printf("* Info ---------\n");
    printf("Name: %s\n", stdt->name);
    printf("Gender: %s\n", stdt->gender);
    printf("Grade: %d\n", stdt->grade);
    printf("Class: %d\n", stdt->Class);
    printf("Number: %d\n", stdt->num);
    
    delete stdt;
    return 0;
}
