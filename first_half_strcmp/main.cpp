#include <iostream>




char* strrchr(const char* str, int ch);

int main(){
    char input[] = "/home/user/hello.c";
    char* output = strrchr(input, '/');
    if (output)
        std::cout << output + 1 << '\n';
    return 0;
}


char* strrchr(const char* str, int ch){
    const char* l = nullptr;
    while (*str != '\0'){
        if (*str == (char)ch){
            l = str;
            }
        str++;
        }
    if ((char)ch == '\0'){
        return (char*)str;
    }    
    return (char*)l;
}