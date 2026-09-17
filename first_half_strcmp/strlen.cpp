#include <cstddef>

std::size_t strlen(const char* str) {
    std::size_t end = 0;
    while (*str != '\0') {
        end++;
        str++;
    }

    return end;
}