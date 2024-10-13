#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(const int argc, const char** argv) {
    unsigned long int n;
    if (argc == 2) {
        n = atoi(argv[1]);
    }
    unsigned long int nsqrt = (int)sqrt((double)n);
    unsigned char* arr = malloc(n);
    for (unsigned long int i = 0; i < n; i++) {
        *(arr + i) = 1;
    }
    for (unsigned int i = 2; i < nsqrt; i++) {
        if (!*(arr + i)) continue;
        printf("%u ", i);
        for (unsigned long int j = i * i; j < n; j += i) {
            if (j % i == 0) *(arr + j) = 0;
        }
    }
    for (unsigned long int i = nsqrt; i < n; i++) {
        if (!*(arr + i)) continue;
        printf("%u ", i);
    }
    return 0;
}