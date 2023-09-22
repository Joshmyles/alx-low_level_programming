#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool is_separator(char c) {
    char separators[] = " \t\n,;.!?\"(){}";
    for (int i = 0; separators[i] != '\0'; i++) {
        if (c == separators[i]) {
            return true;
        }
    }
    return false;
}

char *cap_string(char *str) {
    bool new_word = true;
    char *ptr = str;
    
    while (*ptr != '\0') {
        if (is_separator(*ptr)) {
            new_word = true;
        } else if (new_word && islower(*ptr)) {
            *ptr = toupper(*ptr);
            new_word = false;
        } else {
            new_word = false;
        }
        ptr++;
    }
    
    return str;
}
