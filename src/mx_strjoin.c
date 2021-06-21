#include "libmx.h"

char *mx_strjoin(const char *s1, const char *s2) {
    int i = 0;    
    int k = 0;

    if (s1 == NULL && s2 == NULL)
        return NULL;
    else if (s1 == NULL)
        return mx_strdup(s2);
    else if (s2 == NULL)
        return mx_strdup(s1);
    else {
    char *join = mx_strnew(mx_strlen(s1) + mx_strlen(s2));

    for(; s1[i] != '\0'; i++)
        join[i] = s1[i];
    for(int j = i; s2[k] != '\0'; j++,k++)    
        join[j] = s2[k];
    return join;
    }
}

// int main() {
//     const char *str1= "this";
//     const char *str2= "dodge ";
//     const char *str3= NULL;
//     printf("%s\n",mx_strjoin(str2, str1)); //returns "dodge this"
//     printf("%s\n",mx_strjoin(str1, str3)); //returns "this"
//     printf("%s\n",mx_strjoin(str3, str3)); 
// }



