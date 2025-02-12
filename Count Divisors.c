#include <stdio.h>

int main() {
    int l, r, k, count = 0;
    
    // Read input values
    scanf("%d %d %d", &l, &r, &k);
    
    // Count numbers divisible by k in the range [l, r]
    for (int i = l; i <= r; i++) {
        if (i % k == 0) {
            count++;
        }
    }
    
    // Print the result
    printf("%d\n", count);
    
    return 0;
}
