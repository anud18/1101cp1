#include <stdio.h>

union udata {
    int x;
    long y;
    double z;
    char *a;
};

struct sdata {
    int x;
    long y;
    double z;
    char *a;
};

int main(void) {
    printf("%ld\n", sizeof(union udata));
    printf("%ld\n", sizeof(struct sdata));
    return 0;
}
