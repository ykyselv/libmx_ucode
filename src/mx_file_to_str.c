#include "libmx.h"


char *mx_file_to_str(const char *file) {
    
    int openf = 0;
    char buffer;
    char *newstr = NULL;
    int counter = 0;
  
        openf = open(file, O_RDONLY);
        if (openf > 0) {
            while (read(openf, &buffer, 1))
                counter++;
            close(openf);
            openf = open(file, O_RDONLY);
            newstr = mx_strnew(counter);
            read(openf, newstr, counter);
            close(openf);
        }
    return newstr;
    
}

// int main() {
//     const char *f = "mx_strlen.c";
//     char *str = mx_file_to_str(f);
// mx_printstr(str);
//    system("leaks -q a.out");
// }


    

