#include <stdio.h>

void printFirstNegative(int arr[], int n, int k) {
   

    for (int i = 0; i <= n - k; i++) {
        int firstNeg = 0;
       
           for (int j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                firstNeg = arr[i + j];
                break;
            }
        }
        
        printf("%d", firstNeg);
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
    printFirstNegative(arr, n, k);

    return 0;
}