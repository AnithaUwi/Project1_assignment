#include <stdio.h>

int main() {
    int choice;
    double num1, num2, result;
    
    printf("    SIMPLE CALCULATOR\n");
    printf("==============================\n");
    
    //  This Main loop keeps running until user exits
    while (1) {
        // Display menu
        printf("\n----- MENU -----\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("==============================\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);
        
        // Exit condition
        if (choice == 5) {
            printf("\nThank you for using the calculator!\n");
            printf("==============================\n");
            break;  // Exit the loop
        }
        
        // Validate choice
        if (choice < 1 || choice > 5) {
            printf("\n Invalid choice Please enter 1-5.\n");
            continue;  // Skip to next iteration
        }
        
        // Get numbers from user
        printf("\nEnter first number: ");
        scanf("%lf", &num1);
        printf("Enter second number: ");
        scanf("%lf", &num2);
        
        // Perform operation based on choice
        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("\n>>> Result: %.2f + %.2f = %.2f\n", num1, num2, result);
                break;
                
            case 2:
                result = num1 - num2;
                printf("\n>>> Result: %.2f - %.2f = %.2f\n", num1, num2, result);
                break;
                
            case 3:
                result = num1 * num2;
                printf("\n>>> Result: %.2f * %.2f = %.2f\n", num1, num2, result);
                break;
                
            case 4:
                // Check for division by zero
                if (num2 == 0) {
                    printf("\n Division by zero is not allowed!\n");
                    continue;  // Skip to next iteration
                }
                result = num1 / num2;
                printf("\n>>> Result: %.2f / %.2f = %.2f\n", num1, num2, result);
                break;
                
            default:
                printf("\n Invalid choice!\n");
                continue;
        }
    }
    
    return 0;
}
