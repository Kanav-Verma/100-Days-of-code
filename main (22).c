#include <stdio.h>
#include <string.h>

int longestsubstring(char *s) {
    int n = strlen(s);
    int maxlength = 0;

  
    for (int i = 0; i < n; i++) {
        int count[100] = {0}; 
        int currentlength = 0;

        for (int j = i; j < n; j++) {
             char ch = s[j];
            
            if (count[ch]) {
                break;
            }
            
            count[ch] = 1;
            currentlength++;
        }

        if (currentlength > maxlength) {
            maxlength = currentlength;
        }
    }

    return maxlength;
}

int main() {
    char s[100];
    printf("Enter string: ");
    scanf("%s", s) ;

    int result = longestsubstring(s);
    printf("Output: %d ", result);

    return 0;
}
