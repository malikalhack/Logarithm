#include <stdio.h>


/* logarithm is the degree to which the base must be raised to get the argument */
unsigned int my_log2(unsigned int arg) {
    unsigned int result = 0u;
    if (arg) {
        if (arg & (arg - 1u)) {
            printf("The value has been rounded: ");
        }
        while (arg > 1u) {
            arg >>= 1u;
            result++;
        }
    }
    else printf("Invalid input: ");
    return result;
}

int main() {
    unsigned int res = my_log2(0u);
    printf("Result is %u\n", res);
    res = my_log2(1u);
    printf("Result is %u\n", res);
    res = my_log2(8u);
    printf("Result is %u\n", res);
    res = my_log2(32u);
    printf("Result is %u\n", res);
    res = my_log2(35u);
    printf("Result is %u\n", res);
    getchar();
    return 0;
}

