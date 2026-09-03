#include <stdio.h>

int main() {
    char productName[100];
    int quantity;
    float price;

    printf("Enter product name: ");
    fgets(productName, sizeof(productName), stdin);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    printf("Enter price: ");
    scanf("%f", &price);

    printf("\nProduct Name: %s", productName);
    printf("Quantity: %d\n", quantity);
    printf("Price: %.2f\n", price);

    return 0;
}
