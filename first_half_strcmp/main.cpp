#include <iostream>
char* strcat(char* dest, const char* src) {
    char* ptr = dest;

    while (*ptr != '\0') {
        ptr++;
    }

    while (*src != '\0') {
        *ptr = *src;
        ptr++;
        src++;
    }

    *ptr = '\0';

    return dest;
}



char* strrchr(const char* str, int ch);

int main(){
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
