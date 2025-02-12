#include<stdio.h>

// Function to calculate factorial
long long int factorial(int n) {
    long long int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Main function
int main() {
    int N;
    
    // Read input
    scanf("%d", &N);
    
    // Print the factorial of N
    printf("%lld\n", factorial(N));
    
    return 0;
}
