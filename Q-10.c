// WAP to count prime numbers in an array.
#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }

    // Check for factors from 2 to sqrt(num)
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // num is divisible by i, hence not prime
        }
    }

    return 1; // num is prime
}

int main() {
    int n;

    // Ask the user for the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Check for valid input
    if (n <= 0) {
        printf("Invalid number of elements.\n");
        return 1; // Exit the program with an error code
    }

    int arr[n];

    // Input the array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int primeCount = 0;

    // Count the prime numbers in the array
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            primeCount++;
        }
    }

    // Output the result
    printf("The number of prime numbers in the array is: %d\n", primeCount);

    return 0;
}
