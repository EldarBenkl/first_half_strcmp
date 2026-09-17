#include <iostream>

const char* my_strchr(const char* str, int ch);

int main(){
    const char *str = "hello world\n";

    std::cout << my_strchr(str, 'o');
    std::cout << my_strchr(str, 'l');

    return 0;
}

const char* my_strchr(const char* str, int ch){
    char c = (char)ch;

    while (*str != '\0'){
        if (*str == c){
            return str; 
        }
        str++;
    }

    return 0;
}