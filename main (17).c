
#include <stdio.h>

int main() {
    int n, k;
    printf(" Enter size of array and integer k ")
    scanf("%d %d", &n, &k);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0;

    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }

    int maxSum = sum;

    for (int i = k; i < n; i++) {
        sum = sum + arr[i] - arr[i - k];

        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    printf("%d\n", maxSum);

    return 0;
}
