
#include <stdio.h>

int main() {
    int n;
    
    // Read the size of the array
    scanf("%d", &n);
    
    int last_digit;
    
    // Read the numbers and extract the last digit of the last number
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        last_digit = num % 10;  
    }
    
    // Check if the number is divisible by 10
    if (last_digit == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    
    return 0;
}
