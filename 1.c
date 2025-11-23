
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) {
        printf("Błąd: niepoprawne dane wejściowe.\n");
        return 1;
    }

    if (n < 2) {
        printf("Błąd: n musi być >= 2 (n = %d)\n", n);
        return 1;
    }

    int t[n]; // VLA
    for (int i = 0; i < n; ++i) {
        if (scanf("%d", &t[i]) != 1) {
            printf("Błąd: niepoprawne dane wejściowe (element %d).\n", i);
            return 1;
        }
    }

    int max_diff = abs(t[1] - t[0]);
    for (int i = 1; i < n; ++i) {
        int diff = abs(t[i] - t[i-1]);
        if (diff > max_diff) max_diff = diff;
    }

    printf("MAX_DIFF = %d\n", max_diff);
    return 0;
}
