#include <stdio.h>

void findNext(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int nextGreater = -1;
        
          for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break; 
            }
        }
        
      
        if (i == n - 1) {
            printf("%d\n", nextGreater);
        } else {
            printf("\n %d,", nextGreater);
        }
    }
}

int main() {
    int n;
    
      printf("Enter the size of the array: ");
   scanf ("%d", &n) ;
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    findNext(arr, n);
    
    return 0;
}