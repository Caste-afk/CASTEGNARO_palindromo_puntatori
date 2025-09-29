#include <stdio.h>

int main(void) {
    char stringa[30] = "i topi non avevano nipoti";
    char *p1 = &stringa[0];
    char *p2 = &stringa[0];

    while (*p2 != '\0') {
        p2++;
    }
    p2--;

    while (p1 < p2) {
        if (*p1 == ' ') {
            p1++;
        }
        if (*p2 == ' ') {
            p2--;
        }
        if (*p1 != *p2) {
            printf("stringa non palindroma\n");
            return 0;
        }
        p1++;
        p2--;
    }
    printf("stringa palindroma\n");
    return 0;
}
