#include <stdio.h>

// Hi can somebody help me i cannot perform some input
// https://stackoverflow.com/questions/63542717/hi-can-somebody-help-me-i-cannot-perform-some-input

int main() {
    char name[99], web_address[99], address[99], ageChar[10];
    int age;

    printf("Insert your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Your web address: ");
    fgets(web_address, sizeof(web_address), stdin);

    printf("Insert your age: ");
    fgets(ageChar, sizeof(age), stdin);
    sscanf(ageChar, "%d", &age);

    printf("Insert your address for more information: ");
    fgets(address, sizeof(address), stdin);


    printf("\n-----------------------------------------------------------\n");
    printf("my name is %s", name);
    printf("My web address are %s", web_address);
    printf("my age is  %d\n", age);
    printf("and my home address are %s\n", address);

    return 0;
}