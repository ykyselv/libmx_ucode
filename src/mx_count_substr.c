#include "libmx.h"

int mx_count_substr(const char *str, const char *sub) {
    int i = 0;

    if (str == NULL || sub == NULL)
        return -1;
    if (mx_strlen(str) >= mx_strlen(sub)) {
        while (*str) {
            if (!mx_strncmp((char *)str, (char *)sub, mx_strlen(sub)))
                i++;
            str++;
        }
    }
    return i;
}

// int main() {
// const char *str= "yo, yo, yo Neo";
// const char *sub= "yo";
// printf("%d\n",mx_count_substr(str, sub)); //returns 3
// printf("%d\n",mx_count_substr(str, NULL)); //returns -1
// printf("%d\n",mx_count_substr(NULL, sub)); //returns -1
// }
