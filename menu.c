#include <stdio.h>
int main() 
{
    char menu[5][15] = {"Pizza", "Burger", "Pasta", "Salad", "Soda"};
    int prices[5] = {199, 299, 399, 599, 100};
    int choice;
    printf("Menu:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("%d. %s - Rs %d\n", i + 1, menu[i], prices[i]);
    }
    printf("Enter the number of your choice: ");
    scanf("%d", &choice);
    if (choice >= 1 && choice <= 5) 
    {
        printf("Your itemss %s - Rs %d\n", menu[choice - 1], prices[choice - 1]);
    } 
    else
    {
        printf("Invalid choice.\n");
    }

    return 0;
}