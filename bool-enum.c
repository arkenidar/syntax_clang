
#include <stdio.h>

enum boolean_enum {
boolean_false=0, boolean_true=1
};

int main(){
    enum boolean_enum condition = boolean_false;
    printf("OUT: %s %d\n", condition!=0 ? "True!" : "False!" , (int)condition );
}
