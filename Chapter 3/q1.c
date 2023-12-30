#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profitLoss;
    printf("Enter the cost price: ");
    scanf("%f", &costPrice);

    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);
    profitLoss = sellingPrice - costPrice;
    if (profitLoss > 0) {
        printf("Profit: %.2f\n", profitLoss);
    } else if (profitLoss < 0) {
        printf("Loss: %.2f\n", -profitLoss);
    } else {
        printf("No profit, no loss,he is king.\n");
    }

    return 0;
}
