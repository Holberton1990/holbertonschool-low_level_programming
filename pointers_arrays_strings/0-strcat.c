#include <stdio.h>
#include <string.h>

char *_strncat(char *dest, char *src, int n) {
    strncat(dest, src, n);
    return dest;
}

int main() {
    char dest[100] = "Hello ";
    char src[] = "world!";
    int n = 3;
    printf("%s\n", _strncat(dest, src, n));
    return 0;
}

