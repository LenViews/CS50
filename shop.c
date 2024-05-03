#include <stdio.h>

int main(void) {
    char name[25];
    char order[50];
    char response[20];
    int age;

    printf("Hello, what's your name? ");
    fgets(name, 25, stdin);

    printf("How may I help you %s?", name);
    fgets(order, 50, stdin);

    printf("How old are you? ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("There you go, I'll package your order ");
    } else if (age > 10 && age < 18) {
        char sender[25];
        printf("Who sent you for this package? ");
        getchar();
        fgets(sender, 25, stdin);
        printf("Ensure you deliver everything to %s, right? ", sender);

        scanf("%s", response);
        printf("Thanks %s.", name);
    } else {
        printf("You are too young to be sent to the shop");
    }

    return 0;
}