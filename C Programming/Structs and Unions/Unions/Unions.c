#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Makes it so that the same memory location can be used to store many other tyeps of data
//Holds as much as the largest type, and in this union, it is integer which takes up 4 bytes
//This is often used in Type Punning
//Only one data type can have a value at any given time, it will just spit out a number of some sort if mixed or something
union Nest {
    int x;
    int y;
};

int main() {
    union Nest data;
    data.x = 20;

    printf("%d %d %f %f", data.x, data.y);
}