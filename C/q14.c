#include <stdio.h>

int main() {
    int quantity;
    float pricePerItem, totalPrice, discount, finalPrice;

    // Input validation for quantity
    do {
        printf("Enter the quantity of items purchased: ");
        if (scanf("%d", &quantity) != 1 || quantity < 0) {
            printf("Invalid input!\n");
            while (getchar() != '\n');  
        } else {
            break;
        }
    } while (1);

    // Input validation for price per item
    do {
        printf("Enter the price per item: ");
        if (scanf("%f", &pricePerItem) != 1 || pricePerItem < 0) {
            printf("Invalid input!\n");
            while (getchar() != '\n');  
        } else {
            break;
        }
    } while (1);

    // Calculate the total price before discount
    totalPrice = quantity * pricePerItem;

    // Determine discount rate based on quantity
    if (quantity >= 1 && quantity <= 10) {
        discount = 0.05;
    } else if (quantity >= 11 && quantity <= 50) {
        discount = 0.10;
    } else if (quantity > 50) {
        discount = 0.15;
    } else {
        discount = 0.0;
    }

    // Calculate the final price after applying the discount
    finalPrice = totalPrice * (1 - discount);

    // Print the results
    printf("Total price before discount: %.2f\n", totalPrice);
    printf("Discount: %.2f%%\n", discount * 100);
    printf("Final price after discount: %.2f\n", finalPrice);

    return 0;
}
