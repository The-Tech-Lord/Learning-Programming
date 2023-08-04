#include <stdio.h>
#include <stdlib.h>

//Its similar to a class in other modern languages
struct Student {
    char name[50];
    char major[50];
    int age;
    double gpa;
} test, hello, e1 = {"Max", "Computer Science", 25, 3.4}; //You can put variables here that can be used for accessing the struct
              //This is bascially a variable with the values pre-installed

int main() {
    struct Student student1;
    student1.age = 25;
    test.age = 36;
    test.age = 56;

    printf("%d %d %d\n", student1.age, test.age, test.age);
    printf("%s %s %d %f", e1.name, e1.major, e1.age, e1.gpa);
}