#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(const char* s) 
{
    int len = strlen(s);
    if (len != 4 && len != 6) {
        return false;
    }

    for (int i = 0; i < len; i++) {
        if (!isdigit(s[i])) {
            return false;
        }
    }

    return true;
}