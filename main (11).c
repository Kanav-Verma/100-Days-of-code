#include <stdio.h>

int main() {
    int n, x;
    int  total, left_sum = 0, right_sum;
    
    printf("enter your number ");
 
    scanf("%d", &n);

    total = n * (n + 1) / 2;

    for (x = 1; x <= n; x++) {
        left_sum += x;
        right_sum = total - left_sum + x;

        if (left_sum == right_sum) {
            printf("%d", x);
            return 0;
        }
    }

    printf("not found");
    return 0;
}