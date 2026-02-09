#include <stdio.h>

// Function declarations
void displayMenu();
long long factorial(int n);
long long power(int base, int exp);
int isPrime(int num);

// Main function
int main() {
    int choice, num, base, exp;
    long long result;
    
    printf("  MATH OPERATIONS - RECURSION DEMO\n");
    printf("========================================\n");
    
    while (1) {
        displayMenu();
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("\nEnter a number to find factorial: ");
                scanf("%d", &num);
                
                if (num < 0) {
                    printf("[ERROR] Factorial not defined for negative numbers!\n");
                    continue;
                }
                
                result = factorial(num);
                printf(">>> Factorial of %d = %lld\n", num, result);
                break;
                
            case 2:
                printf("\nEnter base: ");
                scanf("%d", &base);
                printf("Enter exponent: ");
                scanf("%d", &exp);
                
                if (exp < 0) {
                    printf(" Negative exponents not supported!\n");
                    continue;
                }
                
                result = power(base, exp);
                printf(">>> %d ^ %d = %lld\n", base, exp, result);
                break;
                
            case 3:
                printf("\nEnter a number to check if prime: ");
                scanf("%d", &num);
                
                if (num < 2) {
                    printf(">>> %d is NOT a prime number\n", num);
                } else if (isPrime(num)) {
                    printf(">>> %d is a PRIME number\n", num);
                } else {
                    printf(">>> %d is NOT a prime number\n", num);
                }
                break;
                
            case 4:
                printf("\nThank you for using Math Operations!\n");
                printf("========================================\n");
                return 0;
                
            default:
                printf("\n Invalid choice! Please enter 1-4.\n");
                continue;
        }
        
        printf("\n");
    }
    
    return 0;
}

// Function to display menu
void displayMenu() {
    printf("\n----- MENU -----\n");
    printf("1. Calculate Factorial (Recursive)\n");
    printf("2. Calculate Power (Recursive)\n");
    printf("3. Check Prime Number (Iterative)\n");
    printf("4. Exit\n");
    printf("========================================\n");
}
long long factorial(int n) {
    
    if (n == 0 || n == 1) {
        return 1;
    }
    
    return n * factorial(n - 1);
}
long long power(int base, int exp) {
    
    if (exp == 0) {
        return 1;
    }
    return base * power(base, exp - 1);
}
int isPrime(int num) {
    if (num < 2) {
        return 0;  
    }
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    
    return 1; 
}
