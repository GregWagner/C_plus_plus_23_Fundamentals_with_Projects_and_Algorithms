module;

#include <fmt/core.h>

export module utilities; 

export void do_work() {
    fmt::println("Doing work...");
}

export int add_numbers(int a, int b) {
    return a + b;
}
