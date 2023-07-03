#include <stdbool.h>
int i, j;
bool match;

char *_strstr(const char *haystack, char *needle) {
    for (i = 0; haystack[i] != '\0'; i++) {
        if (haystack[i] == needle[0]) {
            match = true;
            for (j = 1; needle[j] != '\0'; j++) {
                if (haystack[i+j] != needle[j]) {
                    match = false;
                    break;
                }
            }
            if (match) {
                return (char *) &haystack[i];
            }
        }
    }
    return ('\0');
}
