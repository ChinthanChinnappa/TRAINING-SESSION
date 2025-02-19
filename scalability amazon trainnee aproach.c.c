#include <stdio.h>
#include <stdlib.h>

#define MAX_USERS 500000   //macros

int main() {
    int currentUsers = 0, choice;

    while (1) {
        printf("\n1. Login\n2. Logout\n3. Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (currentUsers >= MAX_USERS) {
                printf("Platform Crashed! Too many users.\n");
                exit(1);
            }
            currentUsers++; //login done, added user
            printf("User logged in. Active users: %d\n", currentUsers);
        } 
        else if (choice == 2) {
            if (currentUsers > 0) currentUsers--;
            printf("User logged out. Active users: %d\n", currentUsers);
        } 
        else if (choice == 3) {
            printf("Exiting. Final users: %d\n", currentUsers);
            break;
        } 
        else {
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
