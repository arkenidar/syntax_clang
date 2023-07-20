
#include <stdio.h>

// https://en.wikibooks.org/wiki/C_Programming/stdbool.h
#include <stdbool.h>

enum boolean_enum {
boolean_false=0, boolean_true=1
};

int main(){
    enum boolean_enum condition = boolean_false;
    printf("OUT: %s %d\n", condition!=0 ? "True!" : "False!" , (int)condition );

    puts("#include <stdbool.h>");
    bool boolean_variable = true;
    puts(boolean_variable ? "True!" : "False!" );
}
