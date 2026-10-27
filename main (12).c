#include <stdio.h>

int main() {
    int n, i, j, count, found = 0;
    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (a[i] == a[j])
                count++;
        }

        if (count > n / 2) {
            printf("%d", a[i]);
            found = 0;
            break;
        }
    }

    if (found)
        printf("-1");

    return 0;
}