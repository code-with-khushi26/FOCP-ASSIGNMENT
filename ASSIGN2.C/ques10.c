#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    int primeCount = 0;

   
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int isPrime = 1; 

        if (num <= 1) {
            isPrime = 0; 
        } else {
            for (int j = 2; j * j <= num; j++) {
                if (num % j == 0) {
                    isPrime = 0; 
                    break;
                }
            }
        }

        if (isPrime) {
            primeCount++;
        }
    }

    printf("The number of prime numbers in the array is: %d\n", primeCount);

    return 0;
}
