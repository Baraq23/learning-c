#include <stdio.h>


int main(){
    int choice;
    printf("Enter a number between 1 and 3: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("You chose 1\n");
            break;
        case 2:
            printf("You chose 2\n");
            break;
        case 3:
            printf("You chose 3\n");
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
    return 0;
} 