
#include <stdio.h>

int findfirst(int num[],int n , int target ){
    int first =-1 ;
    int low =0;
    int high =n-1;
   while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            first = mid;
            high = mid - 1; 
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return first;
}
int findLast(int nums[], int n, int target) {
    int low = 0, high = n - 1, last = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            last = mid;
            low = mid + 1; 
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return last;
}

int main()
{
    int n,target ;

    printf("Enter size of an array ");
    scanf ("%d",&n );
    int num [n];
    printf("Enter  %d sorted array",n);
    for (int i =0 ;i<n;i++){
        
     scanf("%d",&num[i]);
}
    printf("Enter target number :");
    scanf ("%d",&target);
    
    int first = findfirst(num,n,target);
    int last = find last(num,n,target) ;
    printf("%d %d",first , last );
    return 0;
}
