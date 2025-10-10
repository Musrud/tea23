#include <fmt/chrono.h>
#include <fmt/format.h>

#include "config.h"


void changeValueByParameter(int  value);

void changeValueByPointer(int* ptr);


int main(int argc, char **argv) {

    /**
     * The {fmt} lib is a cross platform library for printing and formatting text
     * it is much more convenient than std::cout and printf
     * More info at https://fmt.dev/latest/api.html
     */
    fmt::print("Hello, {} in Version{} !\n", tea::PROJECT_NAME,tea::PROJECT_VER);
    
    for (int i = 0; i< argc; i++){
        fmt::println("argc:{}, argument {}(Adresse: {})", i, argv[i], fmt::ptr(argv[i]));
    }

    int x = 10;
    int* p = &x;
    fmt::println("Wert von x {}, Wert vom Pointer p{}", x, fmt::ptr(p));
    *p = 42; // point zeigt auf 42
    fmt::println("Adresse von x = {}, Adresse von p {} ", fmt::ptr(&x), fmt::ptr(p));
    fmt::println("Wert von x {}, Wert vom Pointer p{}", x, fmt::ptr(p));

    int y = 5;
    fmt::println("Wert von y: {}", y);
    



    


    /* INSERT YOUR CODE HERE */

    return 0; /* exit gracefully*/
}

void changeValueByParameter(int value) {
    value = 99;
    fmt::println("Value Wert ist: {}", value);

}

void changeValueByPointer (int* ptr) {
    *ptr = 77;
    fmt::print("Wert pointer: {}", *ptr);
}