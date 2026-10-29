
#include <stdio.h>

void printmaximum(int arr[], int n, int k) {

    for (int i = 0; i <= n - k; i++) {
        int maxval = arr[i];
        
        for (int j = 1; j < k; j++) {
            if (arr[i + j] > maxval) {
                maxval = arr[i + j];
            }
        }
        
        printf("%d", maxval);
        if (i < n - k) {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    int n, k;

    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   scanf("%d", &k) ;

    printf("Output: ");
    printmaximum(arr, n, k);

    return 0;
}