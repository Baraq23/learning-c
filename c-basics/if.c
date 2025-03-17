#include <stdio.h>

int main() {
    int age;
    printf("What's your age?: ");
    scanf("%d", &age);
    if (age <= 0) {
        printf("Invalid age\n");
    } else if (age > 0 && age <= 12) {
        printf("You are a minor\n");
    } else if (age > 12 && age <= 18) {
        printf("You are a teenager.\n");
    } else if (age > 18 && age <= 59) {
        printf("You are an adult.\n");
    } else {
        printf("You are a senior citizen.\n");
    }
    return 0;
}