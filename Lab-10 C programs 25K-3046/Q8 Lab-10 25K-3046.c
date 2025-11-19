#include <stdio.h>
#include <string.h>

int main() {
    char categories[3][20] = {"Appetizers", "Main Course", "Desserts"};
    char menuItems[3][3][30] = {
        {"Rolls", "Garlic Bread", "Crackers"},
        {"Burger", "Pizza", "Broast"},
        {"Ice Cream", "Fudge", "Custard"}
    };
    float prices[3][3] = {
        {5.5, 3.5, 6.0},
        {9.0, 12.5, 15.0},
        {3.5, 6.5, 5.0}
    };
    int i, j;

    printf("----- MENU -----\n\n");
    for (i = 0; i < 3; i++) {
        printf("%s:\n", categories[i]);
        for (j = 0; j < 3; j++) {
            printf("  %s  $%.2f\n", menuItems[i][j], prices[i][j]);
        }
        printf("\n");
    }
    printf("----- BUDGET FRIENDLY OPTIONS: Less than $10 -----\n\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (prices[i][j] < 10) {
                printf("%s: %s  $%.2f\n",  categories[i], menuItems[i][j], prices[i][j]);
            }
        }
    }
    return 0;
}

