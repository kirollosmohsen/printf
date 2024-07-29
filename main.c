#include <stdio.h>
#include "main.h"

int main(void) {
    int len;
    char c = 'A';
    char *str = "Hello, world!";
    int num = 1234;

    /* Test string, character, and percent specifiers */
    len = _printf("String: %s\n", str);
    printf("Expected: %d\n", len);

    len = _printf("Character: %c\n", c);
    printf("Expected: %d\n", len);

    len = _printf("Percent: %%\n");
    printf("Expected: %d\n", len);

    /* Test integer specifiers */
    len = _printf("Integer: %i\n", num);
    printf("Expected: %d\n", len);

    len = _printf("Decimal: %d\n", num);
    printf("Expected: %d\n", len);

    return 0;
}
