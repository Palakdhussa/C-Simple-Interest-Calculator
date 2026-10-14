#include <stdio.h>

int main() {
    float principal, rate, time, interest, totalAmount;

    printf("===== SIMPLE INTEREST CALCULATOR =====\n");

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter annual interest rate: ");
    scanf("%f", &rate);

    printf("Enter time in years: ");
    scanf("%f", &time);

    if (principal < 0 || rate < 0 || time < 0) {
        printf("Please enter valid non-negative values.\n");
    } else {
        interest = (principal * rate * time) / 100;
        totalAmount = principal + interest;

        printf("\nSimple Interest = %.2f\n", interest);
        printf("Total Amount = %.2f\n", totalAmount);
    }

    return 0;
}
