extern int something;
int addition(int a, int b, int c) {
    int result = a + b + c;
    return result + something;
}

int subtraction(int a, int b) {
    int result = a - b;
    return result - something;
}