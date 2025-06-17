#include <stdint.h>

void factorial(int n, uint64_t* result) {
    if (n < 0) {
        *result = 0;
        return;
    }
    uint64_t res = 1;
    for (int i = 1; i <= n; ++i) {
        res *= i;
        if (res < 1) {
            *result = 0;
            return;
        }
    }
    *result = res;
}
