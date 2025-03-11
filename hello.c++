//#include <stdio.h>
// //initial version before fixing issue
// int main() {
//     char name[50];
//     printf("Enter your name: ");
//     scanf("%s", name);
//     printf("Hello, %s!\n", name);
//     return 0;
// }
// //
//after fixing issue
#include <stdio.h>
#include <string.h>

int main() {
    char name[50];  // Buffer to store user input

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);  // Read input including spaces

    // Remove trailing newline character if present
    name[strcspn(name, "\n")] = 0;

    // Check if the user entered anything
    if (strlen(name) == 0) {
        printf("Error: Name cannot be empty! Please try again.\n");
    } else {
        printf("Hello, %s!\n", name);
    }

    return 0;
}
