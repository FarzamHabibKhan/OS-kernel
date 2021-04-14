#include "print.h"

void kernel_main(){
    print_clear();
    print_set_color(PRINT_COLOR_BLUE, PRINT_COLOR_WHITE);
    print_str("\n");
    print_str("*****************************************************\n");
    print_str("                        NUST                         \n");
    print_str("                        SEECS                        \n");
    print_str("*****************************************************\n");
    print_set_color(PRINT_COLOR_WHITE, PRINT_COLOR_BLACK);
    print_str("\n\n");
    print_str("                Farzam Habib Khan (302615)");

}