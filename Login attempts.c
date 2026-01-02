#include <stdio.h>

int main() {
    int password = 1234;   // Fixed numeric password
    int input;
    int attempts = 3;

    while (attempts > 0) {
        printf("Enter password: ");
        scanf("%d", &input);

        if (input == password) {
            printf("\nAccess Granted ✅\n");
            return 0;
        } else {
            attempts--;
            printf("Wrong password! Attempts left: %d\n\n", attempts);
        }
    }

    printf("Access Blocked ❌ System Locked!\n");
    return 0;
}
