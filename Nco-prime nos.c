#include <stdio.h>

int main() {
    int l, u, i, j, x, y, m, G;

    printf("Enter lower limit and upper limit: ");
    scanf("%d%d", &l, &u);

    for (i = l; i <= u; i++) {
        for (j = l; j <= u; j++) {
            x = i > j ? i : j;
            y = i < j ? i : j;
            m = x % y;

            while (m != 0) {
                x = y;
                y = m;
                m = x % y;
            }

            G = y;

            if (G == 1) {
                printf("Numbers %d and %d are co-prime.\n", i, j);
            }
        }
    }

    return 0;
}
