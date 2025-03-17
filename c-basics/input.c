#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    int age;
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    // name[strlen(name)-1] = '\0';
    printf("What's your age?: ");
    scanf("%d", &age);

    printf("Hi %s, we recorded your age as: %d yr(s) old\n\n", name, age);

    return 0;
}