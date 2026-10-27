#include <stdio.h>

int pivotindex(int arr[], int n) {
    int totalSum = 0;
    int leftSum = 0;
    
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }
    
    for (int i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i];
        
        if (leftSum == rightSum) {
            return i;
        }
        
        leftSum += arr[i];
    }
    
    return -1;
}

int main() {
    int n;
    scanf("%d", &n) ;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int pivot = pivotindex(arr, n);
    
    printf("Output: %d\n", pivot);
    
    return 0;
}
