#include <stdio.h>

int findsmallest(int arr[], int n, int k) {
   
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    
    return arr[k - 1];
}

int main() {
    int n, k;
    scanf("%d", &n) ;

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    int kth = findsmallest(arr, n, k);
    printf("Output: %d\n", kth);

    return 0;
}