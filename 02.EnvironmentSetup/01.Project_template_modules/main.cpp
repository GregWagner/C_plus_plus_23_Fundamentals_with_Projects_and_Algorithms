#include <fmt/format.h>
import utilities;

int main() {
    int value1 {15} ;
    int value2 {20};
    int result {value1 + value2};
    fmt::print("The result is: {}\n", result);
}