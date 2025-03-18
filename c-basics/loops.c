#include <stdio.h>

int main() {


    // for loop
    // int ages[] = {10, 20, 30, 40, 50};

    // int size = sizeof(ages) / sizeof(ages[0]);
    // for(int i = 0; i < size; i++) {
    //     printf("i is %d\n", ages[i]);
    // }

    // for(int i = size-1; i >= 0; i--) {
    //     printf("%d ", ages[i]);
    // }



    //while loop

    // int i = 0;
    // while(i < 10) {
    //     printf("i is %d\n", i);
    //     i++;
    // }


    // do while loop
    int choice;
    do {
        printf("Enter a number: ");
        scanf("%d", &choice);
        printf("You entered %d\n", choice);
    } while (choice < 0 || choice > 10);
   
    return 0;
} 