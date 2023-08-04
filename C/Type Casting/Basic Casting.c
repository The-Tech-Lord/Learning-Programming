#include <stdio.h>
#include <stdlib.h>

int main() {
    double integer = 1; // Inplicit Casting, Automatic, an example, lossless data
    printf("%f\n", integer);

    int i = (int)3.5; // Explicit Casting, Manual, an example, lossy data, the number can be a variable too, int i = (int)a;
    printf("%d", i);
}
