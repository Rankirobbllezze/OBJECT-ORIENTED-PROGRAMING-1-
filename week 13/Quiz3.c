#include <stdio.h>

int main() {
    FILE *file;
    double amount, totalSales = 0.0;

    file = fopen("sales.txt", "r");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fscanf(file, "%lf", &amount) == 1) {
        totalSales = totalSales + amount;

    }

    fclose(file);

    printf("Total Sales fot the day: %.2lf\n", totalSales);
    return 0;
}

